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

// Function: entry_00206a58
// Address: 0x206a58 - 0x206b2c
void entry_00206a58_0x206a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206a58_0x206a58");
#endif

    switch (ctx->pc) {
        case 0x206a68u: goto label_206a68;
        case 0x206a74u: goto label_206a74;
        case 0x206a84u: goto label_206a84;
        case 0x206a90u: goto label_206a90;
        default: break;
    }

    ctx->pc = 0x206a58u;

    // 0x206a58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206a60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x206A60u;
    SET_GPR_U32(ctx, 31, 0x206A68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x206A60u, 0x206A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A68u;
label_206a68:
    // 0x206a68: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x206A6Cu;
    SET_GPR_U32(ctx, 31, 0x206A74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x206A6Cu, 0x206A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A74u;
label_206a74:
    // 0x206a74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x206a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206a7c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x206A7Cu;
    SET_GPR_U32(ctx, 31, 0x206A84u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x206A7Cu, 0x206A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A84u;
label_206a84:
    // 0x206a84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a88: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x206A88u;
    SET_GPR_U32(ctx, 31, 0x206A90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x206A88u, 0x206A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A90u;
label_206a90:
    // 0x206a90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x206a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x206a98: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x206A98u;
    {
        const bool branch_taken_0x206a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a98) {
            ctx->pc = 0x206B6Cu;
            return;
        }
    }
    ctx->pc = 0x206AA0u;
    // 0x206aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206aa4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x206aa8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x206aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x206aac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206ab4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206ab8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x206abc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206ac0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x206ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x206ac4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x206ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x206ac8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206ad0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x206ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x206ad4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x206ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x206ad8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206adc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206ae0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x206ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x206ae4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x206ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206ae8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x206ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x206aec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x206AECu;
    {
        const bool branch_taken_0x206aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206aec) {
            ctx->pc = 0x206B2Cu;
            return;
        }
    }
    ctx->pc = 0x206AF4u;
    // 0x206af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206af8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206afc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x206b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x206b04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206b24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x206B24u;
    {
        const bool branch_taken_0x206b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b24) {
            ctx->pc = 0x206B6Cu;
            return;
        }
    }
    ctx->pc = 0x206B2Cu;
}
