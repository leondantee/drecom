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

// Function: caseD_6
// Address: 0x24a7d0 - 0x24a854
void caseD_6_0x24a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x24a7d0");
#endif

    switch (ctx->pc) {
        case 0x24a848u: goto label_24a848;
        default: break;
    }

    ctx->pc = 0x24a7d0u;

    // 0x24a7d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a7d4: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x24a7d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x24a7d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x24a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24a7dc: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a7e0: 0x14a000e1  bnez        $a1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x24A7E0u;
    {
        const bool branch_taken_0x24a7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a7e0) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A7E8u;
    // 0x24a7e8: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x24a7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a7ec: 0x8ee50034  lw          $a1, 0x34($s7)
    ctx->pc = 0x24a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x24a7f0: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x24a7f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24a7f4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x24a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x24a7f8: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x24a7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24a7fc: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x24a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
    // 0x24a800: 0xa3c00000  sb          $zero, 0x0($fp)
    ctx->pc = 0x24a800u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a804: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x24a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x24a808: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24a808u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a80c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x24a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x24a810: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x24a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x24a814: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x24a814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x24a818: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x24a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24a81c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a820: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x24a820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a824: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x24a824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x24a828: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x24a828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x24a82c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x24a82cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a830: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a834: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x24a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x24a838: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x24a83c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a840: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A840u;
    SET_GPR_U32(ctx, 31, 0x24A848u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A840u, 0x24A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A848u;
label_24a848:
    // 0x24a848: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a84c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x24A84Cu;
    {
        const bool branch_taken_0x24a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a84c) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A854u;
}
