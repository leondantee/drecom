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

// Function: entry_001dd680
// Address: 0x1dd680 - 0x1dd8d0
void entry_001dd680_0x1dd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd680_0x1dd680");
#endif

    switch (ctx->pc) {
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8ccu: goto label_1dd8cc;
        default: break;
    }

    ctx->pc = 0x1dd680u;

    // 0x1dd680: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1dd684: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dd684u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd688: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd68c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd690: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd694: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd698: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd69c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd6a0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd6a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd6a8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd6ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd6acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd6b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd6b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd6b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd6bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd6c0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd6c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd6c8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd6cc: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1dd6ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd6d0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd6d4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1dd6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1dd6d8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd6dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd6e0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd6e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1dd6e8: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x1dd6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1dd6ec: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1dd6f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd6f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd6f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd6f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd6fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1dd6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1dd700: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x1dd700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd704: 0x153180  sll         $a2, $s5, 6
    ctx->pc = 0x1dd704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd708: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1dd70c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd710: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd714: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd718: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd71c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD71Cu;
    SET_GPR_U32(ctx, 31, 0x1DD724u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD724u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD724u) { return; }
    ctx->pc = 0x1DD724u;
label_1dd724:
    // 0x1dd724: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1dd724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd728: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd72c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1dd730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd734: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd738: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd73c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd740: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD740u;
    SET_GPR_U32(ctx, 31, 0x1DD748u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD748u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD748u) { return; }
    ctx->pc = 0x1DD748u;
label_1dd748:
    // 0x1dd748: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd74c: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd750: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd758: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd75c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd760: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1dd760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd764: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD764u;
    SET_GPR_U32(ctx, 31, 0x1DD76Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD76Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD76Cu) { return; }
    ctx->pc = 0x1DD76Cu;
label_1dd76c:
    // 0x1dd76c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd774: 0x0  nop
    ctx->pc = 0x1dd774u;
    // NOP
    // 0x1dd778: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dd778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dd77c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd784: 0x0  nop
    ctx->pc = 0x1dd784u;
    // NOP
    // 0x1dd788: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1dd78c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd794: 0x0  nop
    ctx->pc = 0x1dd794u;
    // NOP
    // 0x1dd798: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1dd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1dd79c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd7a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd7a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7ac: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd7b0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd7b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd7b8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1dd7b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd7bc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd7c0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1dd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x1dd7c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd7c8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1dd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd7cc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1dd7d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7d4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd7d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd7dc: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1dd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd7e0: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1dd7e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd7e4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd7e8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1dd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1dd7ec: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd7f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd7f4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd7f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd800: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd804: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd808: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd80c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd810: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd814: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd818: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd81c: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x1dd81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd820: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD820u;
    SET_GPR_U32(ctx, 31, 0x1DD828u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD828u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD828u) { return; }
    ctx->pc = 0x1DD828u;
label_1dd828:
    // 0x1dd828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1dd828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd82c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd830: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1dd830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd834: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dd834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd838: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1dd838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd83c: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x1dd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd840: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD840u;
    SET_GPR_U32(ctx, 31, 0x1DD848u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD848u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD848u) { return; }
    ctx->pc = 0x1DD848u;
label_1dd848:
    // 0x1dd848: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd84c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd850: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1dd850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd854: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD854u;
    SET_GPR_U32(ctx, 31, 0x1DD85Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD85Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD85Cu) { return; }
    ctx->pc = 0x1DD85Cu;
label_1dd85c:
    // 0x1dd85c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd864: 0x0  nop
    ctx->pc = 0x1dd864u;
    // NOP
    // 0x1dd868: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dd86c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd874: 0x0  nop
    ctx->pc = 0x1dd874u;
    // NOP
    // 0x1dd878: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dd878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dd87c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd884: 0x0  nop
    ctx->pc = 0x1dd884u;
    // NOP
    // 0x1dd888: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dd888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dd88c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1dd890: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dd894: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd898: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd89c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1dd89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd8a0: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DD8A0u;
    SET_GPR_U32(ctx, 31, 0x1DD8A8u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DD8A8u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD8A8u) { return; }
    ctx->pc = 0x1DD8A8u;
label_1dd8a8:
    // 0x1dd8a8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1dd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1dd8ac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1dd8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dd8b0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd8b4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd8b8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd8bc: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x1dd8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x1dd8c0: 0x2648bd10  addiu       $t0, $s2, -0x42F0
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950160));
    // 0x1dd8c4: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DD8C4u;
    SET_GPR_U32(ctx, 31, 0x1DD8CCu);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DD8CCu;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD8CCu) { return; }
    ctx->pc = 0x1DD8CCu;
label_1dd8cc:
    // 0x1dd8cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dd8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dd8d0u;
}
