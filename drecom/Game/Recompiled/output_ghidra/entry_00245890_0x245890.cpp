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

// Function: entry_00245890
// Address: 0x245890 - 0x2459f4
void entry_00245890_0x245890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245890_0x245890");
#endif

    switch (ctx->pc) {
        case 0x2458bcu: goto label_2458bc;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458fcu: goto label_2458fc;
        default: break;
    }

    ctx->pc = 0x245890u;

    // 0x245890: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245898: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x24589c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2458a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2458a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2458a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2458a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2458a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2458a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2458ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2458b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2458b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2458b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2458B4u;
    SET_GPR_U32(ctx, 31, 0x2458BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2458B4u, 0x2458BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458BCu;
label_2458bc:
    // 0x2458bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2458bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2458c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2458c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2458c8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2458c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2458cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2458ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2458d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2458D0u;
    SET_GPR_U32(ctx, 31, 0x2458D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2458D0u, 0x2458D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458D8u;
label_2458d8:
    // 0x2458d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2458dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2458e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2458e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2458e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2458E8u;
    SET_GPR_U32(ctx, 31, 0x2458F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2458E8u, 0x2458F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458F0u;
label_2458f0:
    // 0x2458f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2458F4u;
    SET_GPR_U32(ctx, 31, 0x2458FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2458F4u, 0x2458FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458FCu;
label_2458fc:
    // 0x2458fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245900: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x245900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x245904: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x245904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x245908: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x245908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x24590c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x24590Cu;
    {
        const bool branch_taken_0x24590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24590c) {
            ctx->pc = 0x2459F4u;
            return;
        }
    }
    ctx->pc = 0x245914u;
    // 0x245914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245918: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24591c: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x24591cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x245920: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245924: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x245924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245928: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x24592c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x24592cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x245930: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x245934: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x245934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245938: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x245938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x24593c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x24593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x245940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245944: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245948: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x24594c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245950: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x245954: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x245958: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24595c: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x24595cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245960: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x245964: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x245964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x245968: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24596c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245970: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x245970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x245974: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x245974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x245978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24597c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245980: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x245984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245988: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24598c: 0x24703e80  addiu       $s0, $v1, 0x3E80
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
    // 0x245990: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245994: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x245994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245998: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x24599c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x24599cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x2459a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2459a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2459a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459a8: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x2459a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2459ac: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2459b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2459b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2459b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459b8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2459b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2459bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2459bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2459c0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2459c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2459c4: 0x24704010  addiu       $s0, $v1, 0x4010
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16400));
    // 0x2459c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2459c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459cc: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2459ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2459d0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2459d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2459d4: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x2459d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x2459d8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2459d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2459dc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459e0: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x2459e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2459e4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2459e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2459e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2459e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2459ec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459f0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2459f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->pc = 0x2459f4u;
}
