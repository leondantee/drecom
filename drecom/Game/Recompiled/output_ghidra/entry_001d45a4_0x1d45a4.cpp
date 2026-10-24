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

// Function: entry_001d45a4
// Address: 0x1d45a4 - 0x1d4718
void entry_001d45a4_0x1d45a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d45a4_0x1d45a4");
#endif

    switch (ctx->pc) {
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d4600u: goto label_1d4600;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d4714u: goto label_1d4714;
        default: break;
    }

    ctx->pc = 0x1d45a4u;

    // 0x1d45a4: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1d45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d45a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d45ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d45acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d45b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d45b4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45b8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d45bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d45c0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45c4: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x1d45c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D45C8u;
    SET_GPR_U32(ctx, 31, 0x1D45D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D45D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D45D0u) { return; }
    ctx->pc = 0x1D45D0u;
label_1d45d0:
    // 0x1d45d0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d45d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d45d8: 0x2457fffe  addiu       $s7, $v0, -0x2
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d45dc: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d45e0: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d45e4: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1d45e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d45e8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d45ec: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d45f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d45f4: 0x26e5ffe0  addiu       $a1, $s7, -0x20
    ctx->pc = 0x1d45f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x1d45f8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D45F8u;
    SET_GPR_U32(ctx, 31, 0x1D4600u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4600u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4600u) { return; }
    ctx->pc = 0x1D4600u;
label_1d4600:
    // 0x1d4600: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1d4600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4604: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d4608: 0x2446fffd  addiu       $a2, $v0, -0x3
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d460c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d4610: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d4610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d4614: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4618: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d461c: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1d4620: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d4620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4624: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d4628: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4628u;
    SET_GPR_U32(ctx, 31, 0x1D4630u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4630u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4630u) { return; }
    ctx->pc = 0x1D4630u;
label_1d4630:
    // 0x1d4630: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4638: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d463c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4640: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4644: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4648: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d464c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4650: 0x2445ffc0  addiu       $a1, $v0, -0x40
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d4654: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4654u;
    SET_GPR_U32(ctx, 31, 0x1D465Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D465Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D465Cu) { return; }
    ctx->pc = 0x1D465Cu;
label_1d465c:
    // 0x1d465c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4664: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1d4668: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d466c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4670: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4674: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4678: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d467c: 0x2445ffb0  addiu       $a1, $v0, -0x50
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1d4680: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4680u;
    SET_GPR_U32(ctx, 31, 0x1D4688u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4688u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4688u) { return; }
    ctx->pc = 0x1D4688u;
label_1d4688:
    // 0x1d4688: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d468c: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4690: 0x26e3fffa  addiu       $v1, $s7, -0x6
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967290));
    // 0x1d4694: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4698: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d469c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d46a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46a8: 0x2465ffa0  addiu       $a1, $v1, -0x60
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x1d46ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D46ACu;
    SET_GPR_U32(ctx, 31, 0x1D46B4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D46B4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D46B4u) { return; }
    ctx->pc = 0x1D46B4u;
label_1d46b4:
    // 0x1d46b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d46b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d46b8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d46bc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1d46bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d46c0: 0x24c3fff9  addiu       $v1, $a2, -0x7
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    // 0x1d46c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46c8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46cc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d46d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46d8: 0x2465ff90  addiu       $a1, $v1, -0x70
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
    // 0x1d46dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D46DCu;
    SET_GPR_U32(ctx, 31, 0x1D46E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D46E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D46E4u) { return; }
    ctx->pc = 0x1D46E4u;
label_1d46e4:
    // 0x1d46e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d46e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d46e8: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1d46e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d46ec: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d46f0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1d46f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d46f8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d46fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d4704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4708: 0x2445ff80  addiu       $a1, $v0, -0x80
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x1d470c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D470Cu;
    SET_GPR_U32(ctx, 31, 0x1D4714u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4714u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4714u) { return; }
    ctx->pc = 0x1D4714u;
label_1d4714:
    // 0x1d4714: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1d4718u;
}
