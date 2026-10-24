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

// Function: caseD_2
// Address: 0x1c8688 - 0x1c86fc
void caseD_2_0x1c8688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1c8688");
#endif

    switch (ctx->pc) {
        case 0x1c86a8u: goto label_1c86a8;
        default: break;
    }

    ctx->pc = 0x1c8688u;

    // 0x1c8688: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c868c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8690: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c8694: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c8694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c869c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c86a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C86A0u;
    SET_GPR_U32(ctx, 31, 0x1C86A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C86A0u, 0x1C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86A8u;
label_1c86a8:
    // 0x1c86a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c86a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c86ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c86acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c86b4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1c86b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1c86b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c86b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c86c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1c86c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1c86c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1c86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1c86c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c86c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c86d0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1c86d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c86d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c86dc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c86e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C86E0u;
    {
        const bool branch_taken_0x1c86e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86e0) {
            ctx->pc = 0x1C86FCu;
            return;
        }
    }
    ctx->pc = 0x1C86E8u;
    // 0x1c86e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c86ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c86f0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c86f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c86f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C86F4u;
    {
        const bool branch_taken_0x1c86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86f4) {
            ctx->pc = 0x1C8724u;
            return;
        }
    }
    ctx->pc = 0x1C86FCu;
}
