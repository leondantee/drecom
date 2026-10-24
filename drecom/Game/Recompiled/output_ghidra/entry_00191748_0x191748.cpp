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

// Function: entry_00191748
// Address: 0x191748 - 0x1917c8
void entry_00191748_0x191748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191748_0x191748");
#endif

    switch (ctx->pc) {
        case 0x19176cu: goto label_19176c;
        case 0x1917b0u: goto label_1917b0;
        default: break;
    }

    ctx->pc = 0x191748u;

    // 0x191748: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19174c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191750: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191754: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191758: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x19175c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x19175cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191760: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x191764: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191764u;
    SET_GPR_U32(ctx, 31, 0x19176Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19176Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19176Cu) { return; }
    ctx->pc = 0x19176Cu;
label_19176c:
    // 0x19176c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191770: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191774: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x191774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191778: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19177c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191780: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x191780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x191784: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191788: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19178c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191790: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191794: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x191798: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19179c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1917a0: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1917a4: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x1917a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1917a8: 0xc040c60  jal         func_103180
    ctx->pc = 0x1917A8u;
    SET_GPR_U32(ctx, 31, 0x1917B0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1917B0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1917B0u) { return; }
    ctx->pc = 0x1917B0u;
label_1917b0:
    // 0x1917b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1917b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1917b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1917b8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1917bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1917c0: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1917c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1917c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1917c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1917c8u;
}
