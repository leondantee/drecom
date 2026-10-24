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

// Function: entry_002960f8
// Address: 0x2960f8 - 0x2962d8
void entry_002960f8_0x2960f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002960f8_0x2960f8");
#endif

    switch (ctx->pc) {
        case 0x296134u: goto label_296134;
        case 0x296170u: goto label_296170;
        default: break;
    }

    ctx->pc = 0x2960f8u;

    // 0x2960f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2960fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2960fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296104: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296108: 0x260300b9  addiu       $v1, $s0, 0xB9
    ctx->pc = 0x296108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 185));
    // 0x29610c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296114: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x296118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29611c: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x29611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x296120: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x296120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296124: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x296124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x296128: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x296128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x29612c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x29612Cu;
    SET_GPR_U32(ctx, 31, 0x296134u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x296134u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x296134u) { return; }
    ctx->pc = 0x296134u;
label_296134:
    // 0x296134: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296138: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29613c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29613cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296140: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296144: 0x260300b9  addiu       $v1, $s0, 0xB9
    ctx->pc = 0x296144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 185));
    // 0x296148: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x296148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29614c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296150: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296154: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x296154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x296158: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x296158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x29615c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x29615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296160: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x296164: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x296164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x296168: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x296168u;
    SET_GPR_U32(ctx, 31, 0x296170u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x296170u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x296170u) { return; }
    ctx->pc = 0x296170u;
label_296170:
    // 0x296170: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296178: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29617c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296180: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x296180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x296184: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x296184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x296188: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x296188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x29618c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296190: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296194: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x296194u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x296198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29619c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961a8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2961ac: 0x90a4004f  lbu         $a0, 0x4F($a1)
    ctx->pc = 0x2961acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 79)));
    // 0x2961b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2961b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2961b4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2961b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2961b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2961b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2961bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2961bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2961c0: 0xa0a2004f  sb          $v0, 0x4F($a1)
    ctx->pc = 0x2961c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x2961c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2961c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961d0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2961d4: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x2961d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x2961d8: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x2961dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2961dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2961e0: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x2961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x2961e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2961e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2961e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2961ec: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x2961ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x2961f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961fc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296200: 0x90a4004f  lbu         $a0, 0x4F($a1)
    ctx->pc = 0x296200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 79)));
    // 0x296204: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x296204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x296208: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29620c: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x296210: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296218: 0xa0a2004f  sb          $v0, 0x4F($a1)
    ctx->pc = 0x296218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x29621c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296220: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296224: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29622c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296230: 0x90a40024  lbu         $a0, 0x24($a1)
    ctx->pc = 0x296230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x296234: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x296234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29623c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x296240: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296248: 0xa0a20024  sb          $v0, 0x24($a1)
    ctx->pc = 0x296248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x29624c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296250: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296254: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296258: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29625c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296260: 0x90a4004c  lbu         $a0, 0x4C($a1)
    ctx->pc = 0x296260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x296264: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x296264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296268: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29626c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x296270: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296278: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x296278u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x29627c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296280: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296284: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296288: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x296288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29628c: 0x90a40024  lbu         $a0, 0x24($a1)
    ctx->pc = 0x29628cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x296290: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x296290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x296294: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296298: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x296298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x29629c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2962a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2962a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2962a4: 0xa0a20024  sb          $v0, 0x24($a1)
    ctx->pc = 0x2962a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2962a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2962ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2962acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2962b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2962b4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2962b8: 0x90a4004c  lbu         $a0, 0x4C($a1)
    ctx->pc = 0x2962b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2962bc: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x2962bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x2962c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2962c4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2962c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2962c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2962cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2962d0: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x2962d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2962d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2962d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2962d8u;
}
