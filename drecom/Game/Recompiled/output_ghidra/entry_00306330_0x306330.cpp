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

// Function: entry_00306330
// Address: 0x306330 - 0x306448
void entry_00306330_0x306330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306330_0x306330");
#endif

    switch (ctx->pc) {
        case 0x306350u: goto label_306350;
        default: break;
    }

    ctx->pc = 0x306330u;

    // 0x306330: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306334: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306338: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30633c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306340: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x306340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306344: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x306344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306348: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x306348u;
    SET_GPR_U32(ctx, 31, 0x306350u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x306348u, 0x306350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306350u;
label_306350:
    // 0x306350: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x306350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306354: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x306354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x306358: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x306358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x30635c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306360: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306364: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x306364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x306368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30636c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30636cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x306370: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306374: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x306374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x306378: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x306378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30637c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306380: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x306380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x306384: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x306384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306388: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x306388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30638c: 0x248392e0  addiu       $v1, $a0, -0x6D20
    ctx->pc = 0x30638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x306390: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x306390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x306394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306398: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x306398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30639c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3063a0: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x3063a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3063a4: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x3063a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063a8: 0x8d030058  lw          $v1, 0x58($t0)
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x3063ac: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x3063acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3063b0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3063b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3063b4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3063b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3063bc: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x3063bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x3063c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3063c4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3063c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3063c8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3063c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3063cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3063d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3063d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3063d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3063d8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3063dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3063dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063e0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3063e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3063e4: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x3063e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3063e8: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x3063e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x3063ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3063ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3063f0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3063f4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3063f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063f8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3063f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3063fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3063fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306400: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x306400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x306404: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x306404u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306408: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x306408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x30640c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30640cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x306410: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x306410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x306414: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x306414u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306418: 0x0  nop
    ctx->pc = 0x306418u;
    // NOP
    // 0x30641c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x306420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x306420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x306424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306428: 0x0  nop
    ctx->pc = 0x306428u;
    // NOP
    // 0x30642c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x306430: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x306430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x306434: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x306434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x306438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30643c: 0x0  nop
    ctx->pc = 0x30643cu;
    // NOP
    // 0x306440: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x306440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x306444: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x306448u;
}
