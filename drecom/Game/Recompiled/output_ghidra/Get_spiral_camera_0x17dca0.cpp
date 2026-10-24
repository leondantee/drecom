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

// Function: Get_spiral_camera
// Address: 0x17dca0 - 0x17dea4
void Get_spiral_camera_0x17dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_spiral_camera_0x17dca0");
#endif

    switch (ctx->pc) {
        case 0x17dd04u: goto label_17dd04;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd68u: goto label_17dd68;
        case 0x17dd80u: goto label_17dd80;
        case 0x17dd94u: goto label_17dd94;
        case 0x17dda4u: goto label_17dda4;
        case 0x17ddc0u: goto label_17ddc0;
        case 0x17dde0u: goto label_17dde0;
        case 0x17de04u: goto label_17de04;
        case 0x17de1cu: goto label_17de1c;
        case 0x17de30u: goto label_17de30;
        case 0x17de40u: goto label_17de40;
        case 0x17de5cu: goto label_17de5c;
        case 0x17de7cu: goto label_17de7c;
        default: break;
    }

    ctx->pc = 0x17dca0u;

    // 0x17dca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17dca4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x17dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x17dca8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x17dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x17dcac: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x17dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x17dcb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17dcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17dcb4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x17dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17dcb8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x17dcbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DCBCu;
    {
        const bool branch_taken_0x17dcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dcbc) {
            ctx->pc = 0x17DCDCu;
            goto label_17dcdc;
        }
    }
    ctx->pc = 0x17DCC4u;
    // 0x17dcc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17dcc8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x17dccc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x17dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x17dcd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17dcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17dcd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DCD4u;
    {
        const bool branch_taken_0x17dcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dcd4) {
            ctx->pc = 0x17DCF0u;
            goto label_17dcf0;
        }
    }
    ctx->pc = 0x17DCDCu;
label_17dcdc:
    // 0x17dcdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17dcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17dce0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x17dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17dce4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17dce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DCE8u;
    {
        const bool branch_taken_0x17dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dce8) {
            ctx->pc = 0x17DD10u;
            goto label_17dd10;
        }
    }
    ctx->pc = 0x17DCF0u;
label_17dcf0:
    // 0x17dcf0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x17dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x17dcf4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x17dcf8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17dcfc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x17DCFCu;
    SET_GPR_U32(ctx, 31, 0x17DD04u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x17DCFCu, 0x17DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD04u;
label_17dd04:
    // 0x17dd04: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17dd08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DD08u;
    {
        const bool branch_taken_0x17dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd08) {
            ctx->pc = 0x17DD24u;
            goto label_17dd24;
        }
    }
    ctx->pc = 0x17DD10u;
label_17dd10:
    // 0x17dd10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17dd14: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x17dd14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dd18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17dd1c: 0xe420ef08  swc1        $f0, -0x10F8($at)
    ctx->pc = 0x17dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF08u, _value); } while (0); }
    // 0x17dd20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_17dd24:
    // 0x17dd24: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17dd28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dd2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x17dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x17dd30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x17dd34: 0x24660090  addiu       $a2, $v1, 0x90
    ctx->pc = 0x17dd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x17dd38: 0xc040c80  jal         func_103200
    ctx->pc = 0x17DD38u;
    SET_GPR_U32(ctx, 31, 0x17DD40u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17DD40u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DD40u) { return; }
    ctx->pc = 0x17DD40u;
label_17dd40:
    // 0x17dd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17dd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dd44: 0x0  nop
    ctx->pc = 0x17dd44u;
    // NOP
    // 0x17dd48: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17dd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17dd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17dd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dd54: 0x0  nop
    ctx->pc = 0x17dd54u;
    // NOP
    // 0x17dd58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17dd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17dd5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dd60: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17DD60u;
    SET_GPR_U32(ctx, 31, 0x17DD68u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17DD68u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DD68u) { return; }
    ctx->pc = 0x17DD68u;
label_17dd68:
    // 0x17dd68: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17dd6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dd70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dd74: 0xc44c00b8  lwc1        $f12, 0xB8($v0)
    ctx->pc = 0x17dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17dd78: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x17DD78u;
    SET_GPR_U32(ctx, 31, 0x17DD80u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x17DD80u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DD80u) { return; }
    ctx->pc = 0x17DD80u;
label_17dd80:
    // 0x17dd80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17dd84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dd88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dd8c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17DD8Cu;
    SET_GPR_U32(ctx, 31, 0x17DD94u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17DD94u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DD94u) { return; }
    ctx->pc = 0x17DD94u;
label_17dd94:
    // 0x17dd94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17dd98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17dd9c: 0xc040c24  jal         func_103090
    ctx->pc = 0x17DD9Cu;
    SET_GPR_U32(ctx, 31, 0x17DDA4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17DDA4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DDA4u) { return; }
    ctx->pc = 0x17DDA4u;
label_17dda4:
    // 0x17dda4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17dda8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ddac: 0x24640190  addiu       $a0, $v1, 0x190
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x17ddb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ddb4: 0xc44c00b0  lwc1        $f12, 0xB0($v0)
    ctx->pc = 0x17ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ddb8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17DDB8u;
    SET_GPR_U32(ctx, 31, 0x17DDC0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17DDC0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DDC0u) { return; }
    ctx->pc = 0x17DDC0u;
label_17ddc0:
    // 0x17ddc0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17ddc4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17ddc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ddcc: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x17ddd0: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x17ddd4: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x17ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17ddd8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17DDD8u;
    SET_GPR_U32(ctx, 31, 0x17DDE0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17DDE0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DDE0u) { return; }
    ctx->pc = 0x17DDE0u;
label_17dde0:
    // 0x17dde0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17dde4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x17dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dde8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x17dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ddec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17ddecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17ddf0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x17ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17ddf4: 0xe4400194  swc1        $f0, 0x194($v0)
    ctx->pc = 0x17ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 404), bits); }
    // 0x17ddf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ddfc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17DDFCu;
    SET_GPR_U32(ctx, 31, 0x17DE04u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17DE04u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE04u) { return; }
    ctx->pc = 0x17DE04u;
label_17de04:
    // 0x17de04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17de08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17de0c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17de10: 0xc44c00c8  lwc1        $f12, 0xC8($v0)
    ctx->pc = 0x17de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17de14: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x17DE14u;
    SET_GPR_U32(ctx, 31, 0x17DE1Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x17DE1Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE1Cu) { return; }
    ctx->pc = 0x17DE1Cu;
label_17de1c:
    // 0x17de1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17de20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17de24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17de24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17de28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17DE28u;
    SET_GPR_U32(ctx, 31, 0x17DE30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17DE30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE30u) { return; }
    ctx->pc = 0x17DE30u;
label_17de30:
    // 0x17de30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17de34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17de38: 0xc040c24  jal         func_103090
    ctx->pc = 0x17DE38u;
    SET_GPR_U32(ctx, 31, 0x17DE40u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17DE40u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE40u) { return; }
    ctx->pc = 0x17DE40u;
label_17de40:
    // 0x17de40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17de44: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17de48: 0x246401a0  addiu       $a0, $v1, 0x1A0
    ctx->pc = 0x17de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17de4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17de50: 0xc44c00c0  lwc1        $f12, 0xC0($v0)
    ctx->pc = 0x17de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17de54: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17DE54u;
    SET_GPR_U32(ctx, 31, 0x17DE5Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17DE5Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE5Cu) { return; }
    ctx->pc = 0x17DE5Cu;
label_17de5c:
    // 0x17de5c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x17de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17de60: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17de64: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17de68: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x17de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x17de6c: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x17de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17de70: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17de74: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17DE74u;
    SET_GPR_U32(ctx, 31, 0x17DE7Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17DE7Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17DE7Cu) { return; }
    ctx->pc = 0x17DE7Cu;
label_17de7c:
    // 0x17de7c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17de80: 0xc46100c4  lwc1        $f1, 0xC4($v1)
    ctx->pc = 0x17de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17de84: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x17de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17de88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17de88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17de8c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17de90: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x17de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x17de94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17de94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de98: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17de9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DEA4u;
}
