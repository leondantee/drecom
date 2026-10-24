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

// Function: entry_002fd2a0
// Address: 0x2fd2a0 - 0x2fd390
void entry_002fd2a0_0x2fd2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd2a0_0x2fd2a0");
#endif

    switch (ctx->pc) {
        case 0x2fd2c8u: goto label_2fd2c8;
        case 0x2fd2e8u: goto label_2fd2e8;
        case 0x2fd318u: goto label_2fd318;
        case 0x2fd33cu: goto label_2fd33c;
        default: break;
    }

    ctx->pc = 0x2fd2a0u;

    // 0x2fd2a0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2fd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd2a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fd2a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2ac: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2fd2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd2b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2b8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2fd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2fd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd2c0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD2C0u;
    SET_GPR_U32(ctx, 31, 0x2FD2C8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD2C0u, 0x2FD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2C8u;
label_2fd2c8:
    // 0x2fd2c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd2cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2d0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2fd2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd2dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd2e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD2E0u;
    SET_GPR_U32(ctx, 31, 0x2FD2E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD2E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD2E8u) { return; }
    ctx->pc = 0x2FD2E8u;
label_2fd2e8:
    // 0x2fd2e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2fd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd2ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fd2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd2f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2f8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2fd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd308: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2fd308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd30c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2fd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd310: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD310u;
    SET_GPR_U32(ctx, 31, 0x2FD318u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD310u, 0x2FD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD318u;
label_2fd318:
    // 0x2fd318: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd320: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd324: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2fd324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd328: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd32c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd330: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fd330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd334: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD334u;
    SET_GPR_U32(ctx, 31, 0x2FD33Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD33Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD33Cu) { return; }
    ctx->pc = 0x2FD33Cu;
label_2fd33c:
    // 0x2fd33c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd340: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd344: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd348: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd34c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2fd34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2fd350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd354: 0x0  nop
    ctx->pc = 0x2fd354u;
    // NOP
    // 0x2fd358: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fd358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd35c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2fd35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2fd360: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd36c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd370: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd374: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2fd374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2fd378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd37c: 0x0  nop
    ctx->pc = 0x2fd37cu;
    // NOP
    // 0x2fd380: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fd380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd384: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2fd384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2fd388: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2fd388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd38c: 0x0  nop
    ctx->pc = 0x2fd38cu;
    // NOP
    ctx->pc = 0x2fd390u;
}
