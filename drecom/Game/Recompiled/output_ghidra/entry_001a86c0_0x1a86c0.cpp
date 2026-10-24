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

// Function: entry_001a86c0
// Address: 0x1a86c0 - 0x1a8790
void entry_001a86c0_0x1a86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86c0_0x1a86c0");
#endif

    switch (ctx->pc) {
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8774u: goto label_1a8774;
        default: break;
    }

    ctx->pc = 0x1a86c0u;

    // 0x1a86c0: 0x3c028110  lui         $v0, 0x8110
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33040 << 16));
    // 0x1a86c4: 0x34437d00  ori         $v1, $v0, 0x7D00
    ctx->pc = 0x1a86c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32000);
    // 0x1a86c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86cc: 0x24423ca8  addiu       $v0, $v0, 0x3CA8
    ctx->pc = 0x1a86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15528));
    // 0x1a86d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA8u, _value); } while (0);
    // 0x1a86d4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a86d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a86d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86dc: 0x24423cac  addiu       $v0, $v0, 0x3CAC
    ctx->pc = 0x1a86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15532));
    // 0x1a86e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CACu, _value); } while (0);
    // 0x1a86e4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a86e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a86ec: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a86f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a86f4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a86f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a86fc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1a86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a8700: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8704: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x1a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x1a8708: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a870c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8710: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8718: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a871c: 0x24423cb4  addiu       $v0, $v0, 0x3CB4
    ctx->pc = 0x1a871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15540));
    // 0x1a8720: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8720u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB4u, _value); } while (0);
    // 0x1a8724: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a8728: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a872c: 0x24543cb8  addiu       $s4, $v0, 0x3CB8
    ctx->pc = 0x1a872cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x1a8730: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1a8730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB8u, _value); } while (0);
    // 0x1a8734: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8738: 0x24443c60  addiu       $a0, $v0, 0x3C60
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15456));
    // 0x1a873c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8740: 0xac243c98  sw          $a0, 0x3C98($at)
    ctx->pc = 0x1a8740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D3C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3C98u, _value); } while (0);
    // 0x1a8744: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1a8748: 0x24a21614  addiu       $v0, $a1, 0x1614
    ctx->pc = 0x1a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5652));
    // 0x1a874c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a874cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8750: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8754: 0x24453c90  addiu       $a1, $v0, 0x3C90
    ctx->pc = 0x1a8754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x1a8758: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8758u;
    SET_GPR_U32(ctx, 31, 0x1A8760u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8758u, 0x1A8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8760u;
label_1a8760:
    // 0x1a8760: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a8760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8764: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a8768: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a8768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a876c: 0xc06a26c  jal         func_1A89B0
    ctx->pc = 0x1A876Cu;
    SET_GPR_U32(ctx, 31, 0x1A8774u);
    ctx->pc = 0x1A89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B0u, 0x1A876Cu, 0x1A8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8774u;
label_1a8774:
    // 0x1a8774: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a8774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a8778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8778u;
    {
        const bool branch_taken_0x1a8778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8778) {
            ctx->pc = 0x1A8790u;
            return;
        }
    }
    ctx->pc = 0x1A8780u;
    // 0x1a8780: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a8780u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8784: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1a8784u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8788: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8788u;
    {
        const bool branch_taken_0x1a8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8788) {
            ctx->pc = 0x1A87DCu;
            return;
        }
    }
    ctx->pc = 0x1A8790u;
}
