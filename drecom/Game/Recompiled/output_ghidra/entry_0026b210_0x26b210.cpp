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

// Function: entry_0026b210
// Address: 0x26b210 - 0x26b2c0
void entry_0026b210_0x26b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b210_0x26b210");
#endif

    switch (ctx->pc) {
        case 0x26b234u: goto label_26b234;
        case 0x26b278u: goto label_26b278;
        default: break;
    }

    ctx->pc = 0x26b210u;

    // 0x26b210: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26b214: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b218: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26b21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b220: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b228: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x26b228u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26b22c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x26B22Cu;
    SET_GPR_U32(ctx, 31, 0x26B234u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26B22Cu, 0x26B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B234u;
label_26b234:
    // 0x26b234: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x26b234u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26b238: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x26b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b23c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26b240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b244: 0x0  nop
    ctx->pc = 0x26b244u;
    // NOP
    // 0x26b248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26b248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26b24c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26b250: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b254: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26b254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x26b258: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b25c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x26b260: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26b264: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x26b268: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x26b26c: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x26b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26b270: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x26B270u;
    SET_GPR_U32(ctx, 31, 0x26B278u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x26B270u, 0x26B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B278u;
label_26b278:
    // 0x26b278: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b27c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b280: 0xac700450  sw          $s0, 0x450($v1)
    ctx->pc = 0x26b280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 16));
    // 0x26b284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b288: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b28c: 0xac700454  sw          $s0, 0x454($v1)
    ctx->pc = 0x26b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1108), GPR_U32(ctx, 16));
    // 0x26b290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b294: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b298: 0xac700458  sw          $s0, 0x458($v1)
    ctx->pc = 0x26b298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1112), GPR_U32(ctx, 16));
    // 0x26b29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b2a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b2a4: 0xac700960  sw          $s0, 0x960($v1)
    ctx->pc = 0x26b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2400), GPR_U32(ctx, 16));
    // 0x26b2a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b2ac: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b2b0: 0xac700964  sw          $s0, 0x964($v1)
    ctx->pc = 0x26b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2404), GPR_U32(ctx, 16));
    // 0x26b2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b2b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26b2bc: 0xac700968  sw          $s0, 0x968($v1)
    ctx->pc = 0x26b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2408), GPR_U32(ctx, 16));
    ctx->pc = 0x26b2c0u;
}
