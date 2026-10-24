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

// Function: entry_002763e0
// Address: 0x2763e0 - 0x2764e0
void entry_002763e0_0x2763e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002763e0_0x2763e0");
#endif

    switch (ctx->pc) {
        case 0x276404u: goto label_276404;
        case 0x276444u: goto label_276444;
        case 0x27645cu: goto label_27645c;
        case 0x276480u: goto label_276480;
        default: break;
    }

    ctx->pc = 0x2763e0u;

    // 0x2763e0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2763e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2763e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2763e8: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2763ec: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2763ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2763f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2763f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763f4: 0x0  nop
    ctx->pc = 0x2763f4u;
    // NOP
    // 0x2763f8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2763f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2763fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2763FCu;
    SET_GPR_U32(ctx, 31, 0x276404u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2763FCu, 0x276404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276404u;
label_276404:
    // 0x276404: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276408: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27640c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276414: 0xe4400c38  swc1        $f0, 0xC38($v0)
    ctx->pc = 0x276414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3128), bits); }
    // 0x276418: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x276418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27641c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x27641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276420: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276428: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x276428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27642c: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x27642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x276430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276434: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x276438: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x27643c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x27643Cu;
    SET_GPR_U32(ctx, 31, 0x276444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x276444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x276444u) { return; }
    ctx->pc = 0x276444u;
label_276444:
    // 0x276444: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x276448: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x276448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27644c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276450: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x276450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x276454: 0xc040c80  jal         func_103200
    ctx->pc = 0x276454u;
    SET_GPR_U32(ctx, 31, 0x27645Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27645Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27645Cu) { return; }
    ctx->pc = 0x27645Cu;
label_27645c:
    // 0x27645c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x27645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276460: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x276460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276464: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x276464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276468: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x276468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27646c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x27646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276470: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276474: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x276474u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276478: 0xc045630  jal         func_1158C0
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 31, 0x276480u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x276478u, 0x276480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276480u;
label_276480:
    // 0x276480: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x276480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x276484: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x276484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x276488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x276488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27648c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276490: 0xe4601830  swc1        $f0, 0x1830($v1)
    ctx->pc = 0x276490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6192), bits); }
    // 0x276494: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x276494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x276498: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x276498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27649c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27649cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2764a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2764a4: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2764a8: 0x3c044498  lui         $a0, 0x4498
    ctx->pc = 0x2764a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17560 << 16));
    // 0x2764ac: 0x34830800  ori         $v1, $a0, 0x800
    ctx->pc = 0x2764acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2764b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2764b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2764b4: 0x0  nop
    ctx->pc = 0x2764b4u;
    // NOP
    // 0x2764b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2764b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2764bc: 0x0  nop
    ctx->pc = 0x2764bcu;
    // NOP
    // 0x2764c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2764C0u;
    {
        const bool branch_taken_0x2764c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2764c0) {
            ctx->pc = 0x2764E0u;
            return;
        }
    }
    ctx->pc = 0x2764C8u;
    // 0x2764c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2764c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2764cc: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2764d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2764d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2764d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2764d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2764dc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2764dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    ctx->pc = 0x2764e0u;
}
