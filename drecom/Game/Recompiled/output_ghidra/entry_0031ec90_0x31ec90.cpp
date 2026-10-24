#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0031ec90
// Address: 0x31ec90 - 0x31ed14
void entry_0031ec90_0x31ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ec90_0x31ec90");
#endif

    switch (ctx->pc) {
        case 0x31ecf0u: goto label_31ecf0;
        default: break;
    }

    ctx->pc = 0x31ec90u;

    // 0x31ec90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ec90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31ec94: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec98: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ec98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31eca0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31eca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31eca4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31ECA4u;
    {
        const bool branch_taken_0x31eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eca4) {
            ctx->pc = 0x31EC34u;
            return;
        }
    }
    ctx->pc = 0x31ECACu;
    // 0x31ecac: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x31ecacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x31ecb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ecb4: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ecb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ecbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ecc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ecc4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ecc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31eccc: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x31ecccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ecd0: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x31ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x31ecd4: 0xae021330  sw          $v0, 0x1330($s0)
    ctx->pc = 0x31ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
    // 0x31ecd8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x31ecd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ecdc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31ECE8u;
    SET_GPR_U32(ctx, 31, 0x31ECF0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31ECE8u, 0x31ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECF0u;
label_31ecf0:
    // 0x31ecf0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x31ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x31ecf4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ecf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ecfc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31ECFCu;
    {
        const bool branch_taken_0x31ecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ecfc) {
            ctx->pc = 0x31ED94u;
            return;
        }
    }
    ctx->pc = 0x31ED04u;
    // 0x31ed04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED04u;
    {
        const bool branch_taken_0x31ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed04) {
            ctx->pc = 0x31ED14u;
            return;
        }
    }
    ctx->pc = 0x31ED0Cu;
    // 0x31ed0c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x31ED0Cu;
    {
        const bool branch_taken_0x31ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed0c) {
            ctx->pc = 0x31EE0Cu;
            return;
        }
    }
    ctx->pc = 0x31ED14u;
}
