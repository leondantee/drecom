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

// Function: entry_003419c4
// Address: 0x3419c4 - 0x341a6c
void entry_003419c4_0x3419c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003419c4_0x3419c4");
#endif

    switch (ctx->pc) {
        case 0x3419dcu: goto label_3419dc;
        case 0x341a44u: goto label_341a44;
        default: break;
    }

    ctx->pc = 0x3419c4u;

    // 0x3419c4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419c8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x3419c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3419cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3419ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3419d0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3419d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3419d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3419D4u;
    SET_GPR_U32(ctx, 31, 0x3419DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3419D4u, 0x3419DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3419DCu;
label_3419dc:
    // 0x3419dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3419dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3419e0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3419e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3419e4: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3419E4u;
    {
        const bool branch_taken_0x3419e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3419e4) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x3419ECu;
    // 0x3419ec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419f0: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x3419f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x3419f4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x3419f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3419f8: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x3419f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x3419fc: 0x24e3a3c0  addiu       $v1, $a3, -0x5C40
    ctx->pc = 0x3419fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943680));
    // 0x341a00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x341a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x341a04: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x341a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341a08: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x341a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341a0c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a10: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x341a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x341a14: 0x8483006c  lh          $v1, 0x6C($a0)
    ctx->pc = 0x341a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x341a18: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x341a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x341a1c: 0xa483006c  sh          $v1, 0x6C($a0)
    ctx->pc = 0x341a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x341a20: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a28: 0x8464006c  lh          $a0, 0x6C($v1)
    ctx->pc = 0x341a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x341a2c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x341a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341a30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341a30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341a34: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341A34u;
    {
        const bool branch_taken_0x341a34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x341a34) {
            ctx->pc = 0x341A6Cu;
            return;
        }
    }
    ctx->pc = 0x341A3Cu;
    // 0x341a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341A3Cu;
    SET_GPR_U32(ctx, 31, 0x341A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341A3Cu, 0x341A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A44u;
label_341a44:
    // 0x341a44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x341a44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341a48: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x341a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x341a4c: 0x30c70007  andi        $a3, $a2, 0x7
    ctx->pc = 0x341a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x341a50: 0x24e3000f  addiu       $v1, $a3, 0xF
    ctx->pc = 0x341a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x341a54: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x341a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341a58: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x341a58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341a5c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a64: 0xa464006c  sh          $a0, 0x6C($v1)
    ctx->pc = 0x341a64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 4));
    // 0x341a68: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x341a68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x341a6cu;
}
