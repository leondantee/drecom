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

// Function: entry_0012288c
// Address: 0x12288c - 0x122944
void entry_0012288c_0x12288c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012288c_0x12288c");
#endif

    switch (ctx->pc) {
        case 0x1228a0u: goto label_1228a0;
        case 0x1228ccu: goto label_1228cc;
        default: break;
    }

    ctx->pc = 0x12288cu;

    // 0x12288c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x122890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122894: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x122898: 0xc048090  jal         func_120240
    ctx->pc = 0x122898u;
    SET_GPR_U32(ctx, 31, 0x1228A0u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122898u, 0x1228A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228A0u;
label_1228a0:
    // 0x1228a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1228a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1228a4: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x1228a8: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1228a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1228ac: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1228acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1228b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1228b4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1228b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1228b8: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x1228bc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1228bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1228c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1228c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1228c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1228C4u;
    SET_GPR_U32(ctx, 31, 0x1228CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1228C4u, 0x1228CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1228ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1228d0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1228d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1228d4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1228d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1228d8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1228dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1228dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1228e0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1228E0u;
    {
        const bool branch_taken_0x1228e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228e0) {
            ctx->pc = 0x1229A8u;
            return;
        }
    }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1228e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1228ec: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1228f0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1228f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1228f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1228f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1228f8: 0x0  nop
    ctx->pc = 0x1228f8u;
    // NOP
    // 0x1228fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1228fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122900: 0x0  nop
    ctx->pc = 0x122900u;
    // NOP
    // 0x122904: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x122904u;
    {
        const bool branch_taken_0x122904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122904) {
            ctx->pc = 0x122944u;
            return;
        }
    }
    ctx->pc = 0x12290Cu;
    // 0x12290c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122910: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122914: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12291c: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x12291cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122920: 0xa2650001  sb          $a1, 0x1($s3)
    ctx->pc = 0x122920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x122924: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122928: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12292c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122930: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122934: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x122934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122938: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x122938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x12293c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12293Cu;
    {
        const bool branch_taken_0x12293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12293c) {
            ctx->pc = 0x1229A0u;
            return;
        }
    }
    ctx->pc = 0x122944u;
}
