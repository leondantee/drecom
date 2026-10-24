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

// Function: entry_0030985c
// Address: 0x30985c - 0x309978
void entry_0030985c_0x30985c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030985c_0x30985c");
#endif

    switch (ctx->pc) {
        case 0x30987cu: goto label_30987c;
        default: break;
    }

    ctx->pc = 0x30985cu;

    // 0x30985c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30985cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x309860: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x309860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x309864: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x309864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x309868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30986c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309870: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x309870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309874: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x309874u;
    SET_GPR_U32(ctx, 31, 0x30987Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x309874u, 0x30987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30987Cu;
label_30987c:
    // 0x30987c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x309880: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x309880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x309884: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x309884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x309888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30988c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309890: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x309890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x309894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309898: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x309898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30989c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x30989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3098a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3098a4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3098a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3098a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3098ac: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3098acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3098b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3098b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3098b4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3098b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3098b8: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x3098b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x3098bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3098c4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3098c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3098ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3098d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3098d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3098d4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3098d8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098dc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3098dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3098e0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3098e4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3098e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3098e8: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x3098ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3098f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3098f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3098f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3098f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3098f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3098fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x309900: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x309900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x309904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x309908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30990c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309910: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309914: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x309914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x309918: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x309918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30991c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x30991cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x309920: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309924: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x309924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x309928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30992c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x30992cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x309930: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309934: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x309934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x309938: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30993c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30993cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309944: 0x0  nop
    ctx->pc = 0x309944u;
    // NOP
    // 0x309948: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x309948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30994c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309954: 0x0  nop
    ctx->pc = 0x309954u;
    // NOP
    // 0x309958: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x309958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30995c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309960: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309968: 0x0  nop
    ctx->pc = 0x309968u;
    // NOP
    // 0x30996c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x309970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x309974: 0x0  nop
    ctx->pc = 0x309974u;
    // NOP
    ctx->pc = 0x309978u;
}
