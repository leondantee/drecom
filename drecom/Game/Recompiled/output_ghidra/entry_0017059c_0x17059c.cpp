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

// Function: entry_0017059c
// Address: 0x17059c - 0x17083c
void entry_0017059c_0x17059c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017059c_0x17059c");
#endif

    switch (ctx->pc) {
        case 0x170638u: goto label_170638;
        case 0x170654u: goto label_170654;
        case 0x170670u: goto label_170670;
        case 0x170748u: goto label_170748;
        case 0x17075cu: goto label_17075c;
        case 0x17078cu: goto label_17078c;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707d0u: goto label_1707d0;
        case 0x1707e4u: goto label_1707e4;
        default: break;
    }

    ctx->pc = 0x17059cu;

    // 0x17059c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1705a0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1705a0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1705a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1705a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1705ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1705b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1705b4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1705b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1705b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1705bc: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1705c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1705c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705c4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1705c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1705c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1705cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1705d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1705d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1705d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1705d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1705d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1705dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1705e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1705e4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1705e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1705e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1705ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1705f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1705f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1705f4: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1705f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1705f8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1705fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170600: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170604: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x170604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x170608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17060c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x17060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170610: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170614: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170618: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17061c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x17061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170620: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170624: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170628: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17062c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170630: 0xc040c80  jal         func_103200
    ctx->pc = 0x170630u;
    SET_GPR_U32(ctx, 31, 0x170638u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170638u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170638u) { return; }
    ctx->pc = 0x170638u;
label_170638:
    // 0x170638: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17063c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170640: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170644: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170648: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x170648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17064c: 0xc040c80  jal         func_103200
    ctx->pc = 0x17064Cu;
    SET_GPR_U32(ctx, 31, 0x170654u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170654u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170654u) { return; }
    ctx->pc = 0x170654u;
label_170654:
    // 0x170654: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170658: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x17065c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170660: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170664: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170668: 0xc040c80  jal         func_103200
    ctx->pc = 0x170668u;
    SET_GPR_U32(ctx, 31, 0x170670u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170670u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170670u) { return; }
    ctx->pc = 0x170670u;
label_170670:
    // 0x170670: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170678: 0x0  nop
    ctx->pc = 0x170678u;
    // NOP
    // 0x17067c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x170680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170688: 0x0  nop
    ctx->pc = 0x170688u;
    // NOP
    // 0x17068c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x17068cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x170690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170698: 0x0  nop
    ctx->pc = 0x170698u;
    // NOP
    // 0x17069c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1706a0: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1706a4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1706a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1706a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1706b0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1706b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1706b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1706b8: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1706bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1706bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706c0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1706c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1706c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1706c8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1706c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1706cc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1706d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1706d8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1706dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1706e0: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1706e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1706e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706e8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1706ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1706ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1706f0: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1706f4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1706f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170700: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170704: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x170704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170708: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x17070c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17070cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170710: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x170710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170714: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x170714u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x170718: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17071c: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170720: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x170720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170724: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x170728: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x170728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17072c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170730: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170734: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170738: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x170738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x17073c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170740: 0xc05da44  jal         func_176910
    ctx->pc = 0x170740u;
    SET_GPR_U32(ctx, 31, 0x170748u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170740u, 0x170748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170748u;
label_170748:
    // 0x170748: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17074c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170750: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x170750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x170754: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170754u;
    SET_GPR_U32(ctx, 31, 0x17075Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17075Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17075Cu) { return; }
    ctx->pc = 0x17075Cu;
label_17075c:
    // 0x17075c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x17075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170760: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170764: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170768: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17076c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17076cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170770: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x170774: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x170774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x170778: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17077c: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x170780: 0x24c50060  addiu       $a1, $a2, 0x60
    ctx->pc = 0x170780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x170784: 0xc05da44  jal         func_176910
    ctx->pc = 0x170784u;
    SET_GPR_U32(ctx, 31, 0x17078Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170784u, 0x17078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17078Cu;
label_17078c:
    // 0x17078c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170790: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x170790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170794: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x170794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x170798: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170798u;
    SET_GPR_U32(ctx, 31, 0x1707A0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1707A0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1707A0u) { return; }
    ctx->pc = 0x1707A0u;
label_1707a0:
    // 0x1707a0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1707a4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1707a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1707a8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1707ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1707b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1707b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1707b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1707b8: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1707bc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1707c0: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1707c4: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1707c8: 0xc05da44  jal         func_176910
    ctx->pc = 0x1707C8u;
    SET_GPR_U32(ctx, 31, 0x1707D0u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1707C8u, 0x1707D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707D0u;
label_1707d0:
    // 0x1707d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1707d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1707d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1707d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1707d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1707dc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1707DCu;
    SET_GPR_U32(ctx, 31, 0x1707E4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1707E4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1707E4u) { return; }
    ctx->pc = 0x1707E4u;
label_1707e4:
    // 0x1707e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707ec: 0x0  nop
    ctx->pc = 0x1707ecu;
    // NOP
    // 0x1707f0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1707f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1707f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707fc: 0x0  nop
    ctx->pc = 0x1707fcu;
    // NOP
    // 0x170800: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x170804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x170808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17080c: 0x0  nop
    ctx->pc = 0x17080cu;
    // NOP
    // 0x170810: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x170810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x170814: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170818: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x170818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x17081c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17081cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170824: 0x0  nop
    ctx->pc = 0x170824u;
    // NOP
    // 0x170828: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17082c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x170830: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x170830u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170834: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170834) {
            ctx->pc = 0x170908u;
            return;
        }
    }
    ctx->pc = 0x17083Cu;
}
