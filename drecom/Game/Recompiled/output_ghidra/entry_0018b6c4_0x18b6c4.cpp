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

// Function: entry_0018b6c4
// Address: 0x18b6c4 - 0x18b770
void entry_0018b6c4_0x18b6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b6c4_0x18b6c4");
#endif

    switch (ctx->pc) {
        case 0x18b740u: goto label_18b740;
        default: break;
    }

    ctx->pc = 0x18b6c4u;

    // 0x18b6c4: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x18b6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18b6c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b6cc: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b6d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b6d4: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b6d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b6dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b6e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b6ec: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6f4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b6f8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b6f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b6fc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b700: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b704: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b708: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b70c: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b710: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b718: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b71c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B770u;
            return;
        }
    }
    ctx->pc = 0x18B724u;
    // 0x18b724: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b72c: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b730: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x18b730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b734: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b738: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B738u;
    SET_GPR_U32(ctx, 31, 0x18B740u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B738u, 0x18B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B740u;
label_18b740:
    // 0x18b740: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x18b740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x18b744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b748: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b750: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b754: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b758: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x18b758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x18b75c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b764: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x18b764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b768: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x18B768u;
    {
        const bool branch_taken_0x18b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b768) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B770u;
}
