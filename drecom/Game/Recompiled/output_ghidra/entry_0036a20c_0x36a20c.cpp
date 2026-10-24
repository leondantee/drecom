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

// Function: entry_0036a20c
// Address: 0x36a20c - 0x36a290
void entry_0036a20c_0x36a20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a20c_0x36a20c");
#endif

    switch (ctx->pc) {
        case 0x36a22cu: goto label_36a22c;
        case 0x36a240u: goto label_36a240;
        case 0x36a264u: goto label_36a264;
        default: break;
    }

    ctx->pc = 0x36a20cu;

    // 0x36a20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a210: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a214: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36a214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x36a218: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a21c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a220: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a224: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36A224u;
    SET_GPR_U32(ctx, 31, 0x36A22Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A22Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A22Cu) { return; }
    ctx->pc = 0x36A22Cu;
label_36a22c:
    // 0x36a22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a234: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a238: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A238u;
    SET_GPR_U32(ctx, 31, 0x36A240u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A238u, 0x36A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A240u;
label_36a240:
    // 0x36a240: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a244: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a248: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36a24c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a250: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a254: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a258: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a25c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A25Cu;
    SET_GPR_U32(ctx, 31, 0x36A264u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A25Cu, 0x36A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A264u;
label_36a264:
    // 0x36a264: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a268: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a26c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a270: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36a274: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a278: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a27c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a27cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a280: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36a284: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a288: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A288u;
    SET_GPR_U32(ctx, 31, 0x36A290u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A288u, 0x36A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A290u;
}
