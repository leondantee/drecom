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

// Function: entry_0022d2dc
// Address: 0x22d2dc - 0x22d3ac
void entry_0022d2dc_0x22d2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d2dc_0x22d2dc");
#endif

    switch (ctx->pc) {
        case 0x22d330u: goto label_22d330;
        case 0x22d354u: goto label_22d354;
        default: break;
    }

    ctx->pc = 0x22d2dcu;

    // 0x22d2dc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2e0: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x22d2e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x22d2e4: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x22D2E4u;
    {
        const bool branch_taken_0x22d2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2e4) {
            ctx->pc = 0x22D3ACu;
            return;
        }
    }
    ctx->pc = 0x22D2ECu;
    // 0x22d2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d2f0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x22d2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2f4: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x22d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x22d2f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22d2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d2fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d300: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x22d300u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x22d304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d308: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d30c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22d30cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d314: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22d314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d318: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d31c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22d31cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d320: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d324: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22d324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22d328: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D328u;
    SET_GPR_U32(ctx, 31, 0x22D330u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D328u, 0x22D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D330u;
label_22d330:
    // 0x22d330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d334: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22d338: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x22d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22d33c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22d340: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22d340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22d344: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d348: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22d348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d34c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D34Cu;
    SET_GPR_U32(ctx, 31, 0x22D354u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D34Cu, 0x22D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D354u;
label_22d354:
    // 0x22d354: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d358: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22d358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22d35c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22d360: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22d364: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22d364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22d368: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d36c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d370: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22d370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22d374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22d378: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22d378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22d37c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22d380: 0x34657fff  ori         $a1, $v1, 0x7FFF
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x22d384: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x22d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22d388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22d38c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22d38cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22d390: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d394: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d398: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22d39c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22d3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22d3a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x22d3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22d3a8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x22d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x22d3acu;
}
