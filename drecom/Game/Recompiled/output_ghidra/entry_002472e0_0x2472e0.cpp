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

// Function: entry_002472e0
// Address: 0x2472e0 - 0x24736c
void entry_002472e0_0x2472e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002472e0_0x2472e0");
#endif

    switch (ctx->pc) {
        case 0x247328u: goto label_247328;
        case 0x24734cu: goto label_24734c;
        default: break;
    }

    ctx->pc = 0x2472e0u;

    // 0x2472e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2472e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2472e8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2472E8u;
    {
        const bool branch_taken_0x2472e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472e8) {
            ctx->pc = 0x24736Cu;
            return;
        }
    }
    ctx->pc = 0x2472F0u;
    // 0x2472f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2472f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2472f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2472f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2472fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247300: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247304: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247308: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24730c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24730cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247310: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247314: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247318: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24731c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24731cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247320: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247320u;
    SET_GPR_U32(ctx, 31, 0x247328u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247320u, 0x247328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247328u;
label_247328:
    // 0x247328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24732c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x247330: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x247334: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x247338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24733c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247340: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x247340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x247344: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247344u;
    SET_GPR_U32(ctx, 31, 0x24734Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247344u, 0x24734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24734Cu;
label_24734c:
    // 0x24734c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247350: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x247350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x247354: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x247358: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24735c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24735cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247360: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247364: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247368: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x247368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24736cu;
}
