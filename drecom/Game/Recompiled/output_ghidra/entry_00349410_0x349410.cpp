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

// Function: entry_00349410
// Address: 0x349410 - 0x3494a8
void entry_00349410_0x349410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349410_0x349410");
#endif

    switch (ctx->pc) {
        case 0x349454u: goto label_349454;
        case 0x349468u: goto label_349468;
        case 0x349488u: goto label_349488;
        default: break;
    }

    ctx->pc = 0x349410u;

    // 0x349410: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349414: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x349414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349418: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34941c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x349420: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x349424: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x349424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x349428: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34942c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349430: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x349434: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x349438: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34943c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x349440: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349444: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x349448: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x349448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34944c: 0xc067844  jal         func_19E110
    ctx->pc = 0x34944Cu;
    SET_GPR_U32(ctx, 31, 0x349454u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x34944Cu, 0x349454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349454u;
label_349454:
    // 0x349454: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349458: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x349458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34945c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x34945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x349460: 0xc040c9e  jal         func_103278
    ctx->pc = 0x349460u;
    SET_GPR_U32(ctx, 31, 0x349468u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x349468u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x349468u) { return; }
    ctx->pc = 0x349468u;
label_349468:
    // 0x349468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34946c: 0x0  nop
    ctx->pc = 0x34946cu;
    // NOP
    // 0x349470: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x349470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x349474: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x349474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349478: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x349478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34947c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349480: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x349480u;
    SET_GPR_U32(ctx, 31, 0x349488u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x349488u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x349488u) { return; }
    ctx->pc = 0x349488u;
label_349488:
    // 0x349488: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x349488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34948c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349490: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349494: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349498: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x349498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34949c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3494a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3494a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3494a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x3494a8u;
}
