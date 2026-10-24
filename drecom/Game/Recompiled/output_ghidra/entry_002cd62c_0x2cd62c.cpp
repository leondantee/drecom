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

// Function: entry_002cd62c
// Address: 0x2cd62c - 0x2cd708
void entry_002cd62c_0x2cd62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd62c_0x2cd62c");
#endif

    switch (ctx->pc) {
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd700u: goto label_2cd700;
        default: break;
    }

    ctx->pc = 0x2cd62cu;

    // 0x2cd62c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd630: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd634: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cd634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd63c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cd644: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2cd644u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd64c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cd64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd650: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CD650u;
    SET_GPR_U32(ctx, 31, 0x2CD658u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CD650u, 0x2CD658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD658u;
label_2cd658:
    // 0x2cd658: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd65c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd660: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2cd660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd66c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd670: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cd670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cd674: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cd678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd67c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd680: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd684: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cd684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cd688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd68c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd690: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cd694: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2cd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cd698: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd69c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cd6a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6ac: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2cd6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2cd6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd6b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6bc: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2cd6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2cd6c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd6c8: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2cd6c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2cd6cc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2cd6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2cd6d0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2cd6d4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2cd6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cd6d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD6D8u;
    {
        const bool branch_taken_0x2cd6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6d8) {
            ctx->pc = 0x2CD708u;
            return;
        }
    }
    ctx->pc = 0x2CD6E0u;
    // 0x2cd6e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd6e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cd6ec: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2cd6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2cd6f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd6f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cd6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd6f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CD6F8u;
    SET_GPR_U32(ctx, 31, 0x2CD700u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CD6F8u, 0x2CD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD700u;
label_2cd700:
    // 0x2cd700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD700u;
    {
        const bool branch_taken_0x2cd700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd700) {
            ctx->pc = 0x2CD728u;
            return;
        }
    }
    ctx->pc = 0x2CD708u;
}
