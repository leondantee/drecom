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

// Function: entry_001d47bc
// Address: 0x1d47bc - 0x1d48a0
void entry_001d47bc_0x1d47bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47bc_0x1d47bc");
#endif

    switch (ctx->pc) {
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d489cu: goto label_1d489c;
        default: break;
    }

    ctx->pc = 0x1d47bcu;

    // 0x1d47bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d47c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d47c8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d47cc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1d47ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d47d0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D47D0u;
    SET_GPR_U32(ctx, 31, 0x1D47D8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47D8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47D8u) { return; }
    ctx->pc = 0x1D47D8u;
label_1d47d8:
    // 0x1d47d8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47dc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d47e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d47e4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d47e8: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d47ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D47ECu;
    SET_GPR_U32(ctx, 31, 0x1D47F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47F4u) { return; }
    ctx->pc = 0x1D47F4u;
label_1d47f4:
    // 0x1d47f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47f8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d47fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4800: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4804: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d4808: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4808u;
    SET_GPR_U32(ctx, 31, 0x1D4810u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4810u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4810u) { return; }
    ctx->pc = 0x1D4810u;
label_1d4810:
    // 0x1d4810: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4814: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d4818: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d481c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4820: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d4824: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4824u;
    SET_GPR_U32(ctx, 31, 0x1D482Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D482Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D482Cu) { return; }
    ctx->pc = 0x1D482Cu;
label_1d482c:
    // 0x1d482c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4830: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1d4834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4838: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d483c: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1d483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1d4840: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4840u;
    SET_GPR_U32(ctx, 31, 0x1D4848u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4848u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4848u) { return; }
    ctx->pc = 0x1D4848u;
label_1d4848:
    // 0x1d4848: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d484c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1d4850: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4854: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4858: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d485c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D485Cu;
    SET_GPR_U32(ctx, 31, 0x1D4864u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4864u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4864u) { return; }
    ctx->pc = 0x1D4864u;
label_1d4864:
    // 0x1d4864: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4868: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x1d486c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4870: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4874: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1d4878: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4878u;
    SET_GPR_U32(ctx, 31, 0x1D4880u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4880u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4880u) { return; }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4884: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d4888: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d488c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4890: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1d4894: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4894u;
    SET_GPR_U32(ctx, 31, 0x1D489Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D489Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D489Cu) { return; }
    ctx->pc = 0x1D489Cu;
label_1d489c:
    // 0x1d489c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1d48a0u;
}
