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

// Function: entry_0024c1f8
// Address: 0x24c1f8 - 0x24c2c8
void entry_0024c1f8_0x24c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c1f8_0x24c1f8");
#endif

    switch (ctx->pc) {
        case 0x24c274u: goto label_24c274;
        case 0x24c298u: goto label_24c298;
        default: break;
    }

    ctx->pc = 0x24c1f8u;

    // 0x24c1f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c1fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c1fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c200: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c204: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24c204u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24c208: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x24c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c20c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24c210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24c210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c214: 0x0  nop
    ctx->pc = 0x24c214u;
    // NOP
    // 0x24c218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24c218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c21c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24c220: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c224: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c228: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c22c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c230: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c23c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24c23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c240: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x24c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c244: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c248: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c24c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c250: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c25c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24c25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c260: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x24c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x24c264: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24c264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c268: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c268u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c26c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24C26Cu;
    SET_GPR_U32(ctx, 31, 0x24C274u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24C26Cu, 0x24C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C274u;
label_24c274:
    // 0x24c274: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24c274u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c278: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c27c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24c280: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c284: 0x26220310  addiu       $v0, $s1, 0x310
    ctx->pc = 0x24c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x24c288: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24c288u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24c28c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24c28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24c290: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24C290u;
    SET_GPR_U32(ctx, 31, 0x24C298u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24C290u, 0x24C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C298u;
label_24c298:
    // 0x24c298: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24c298u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c29c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c2a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c2a4: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C2A4u;
    {
        const bool branch_taken_0x24c2a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c2a4) {
            ctx->pc = 0x24C2C8u;
            return;
        }
    }
    ctx->pc = 0x24C2ACu;
    // 0x24c2ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c2b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c2b4: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24c2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c2b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c2bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24c2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C2C0u;
    {
        const bool branch_taken_0x24c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2c0) {
            ctx->pc = 0x24C2D0u;
            return;
        }
    }
    ctx->pc = 0x24C2C8u;
}
