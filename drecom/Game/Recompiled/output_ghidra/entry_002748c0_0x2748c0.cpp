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

// Function: entry_002748c0
// Address: 0x2748c0 - 0x2749c8
void entry_002748c0_0x2748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002748c0_0x2748c0");
#endif

    switch (ctx->pc) {
        case 0x2748e4u: goto label_2748e4;
        case 0x274924u: goto label_274924;
        case 0x27493cu: goto label_27493c;
        case 0x274964u: goto label_274964;
        default: break;
    }

    ctx->pc = 0x2748c0u;

    // 0x2748c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2748c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2748c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2748c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2748c8: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2748cc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2748ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2748d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2748d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2748d4: 0x0  nop
    ctx->pc = 0x2748d4u;
    // NOP
    // 0x2748d8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2748d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2748dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2748DCu;
    SET_GPR_U32(ctx, 31, 0x2748E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2748DCu, 0x2748E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748E4u;
label_2748e4:
    // 0x2748e4: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2748e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2748e8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2748e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2748ec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2748f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2748f4: 0xe4400c38  swc1        $f0, 0xC38($v0)
    ctx->pc = 0x2748f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3128), bits); }
    // 0x2748f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2748f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2748fc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x274900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274904: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274908: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27490c: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x27490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274914: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x274914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274918: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x274918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x27491c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x27491Cu;
    SET_GPR_U32(ctx, 31, 0x274924u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x274924u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x274924u) { return; }
    ctx->pc = 0x274924u;
label_274924:
    // 0x274924: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x274928: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x274928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27492c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x27492cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x274930: 0x24e6d2c0  addiu       $a2, $a3, -0x2D40
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955712));
    // 0x274934: 0xc040c80  jal         func_103200
    ctx->pc = 0x274934u;
    SET_GPR_U32(ctx, 31, 0x27493Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27493Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27493Cu) { return; }
    ctx->pc = 0x27493Cu;
label_27493c:
    // 0x27493c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27493cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274940: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x274940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274944: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x274944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274948: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x274948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27494c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x27494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274950: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x274950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274958: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x274958u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27495c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x27495Cu;
    SET_GPR_U32(ctx, 31, 0x274964u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x27495Cu, 0x274964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274964u;
label_274964:
    // 0x274964: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x274964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x274968: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27496c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274970: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274974: 0xe4601830  swc1        $f0, 0x1830($v1)
    ctx->pc = 0x274974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6192), bits); }
    // 0x274978: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x27497c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x27497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x274980: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x274980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274984: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274988: 0xc4811830  lwc1        $f1, 0x1830($a0)
    ctx->pc = 0x274988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27498c: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x274990: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x274990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x274994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274998: 0x0  nop
    ctx->pc = 0x274998u;
    // NOP
    // 0x27499c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27499cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749a0: 0x0  nop
    ctx->pc = 0x2749a0u;
    // NOP
    // 0x2749a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2749A4u;
    {
        const bool branch_taken_0x2749a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2749a4) {
            ctx->pc = 0x2749C8u;
            return;
        }
    }
    ctx->pc = 0x2749ACu;
    // 0x2749ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2749acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2749b0: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2749b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2749b4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2749b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2749b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2749b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2749bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2749bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2749c0: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2749c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2749c4: 0x0  nop
    ctx->pc = 0x2749c4u;
    // NOP
    ctx->pc = 0x2749c8u;
}
