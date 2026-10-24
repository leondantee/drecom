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

// Function: entry_00349bf4
// Address: 0x349bf4 - 0x349c70
void entry_00349bf4_0x349bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349bf4_0x349bf4");
#endif

    switch (ctx->pc) {
        case 0x349c1cu: goto label_349c1c;
        default: break;
    }

    ctx->pc = 0x349bf4u;

    // 0x349bf4: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x349bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x349bf8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x349bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x349bfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x349c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c08: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x349c0c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x349c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349c10: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x349c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x349c14: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x349C14u;
    SET_GPR_U32(ctx, 31, 0x349C1Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x349C14u, 0x349C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C1Cu;
label_349c1c:
    // 0x349c1c: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x349C1Cu;
    {
        const bool branch_taken_0x349c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c1c) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349C24u;
    // 0x349c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349c2c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x349c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x349c30: 0x146000c4  bnez        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x349C30u;
    {
        const bool branch_taken_0x349c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349c30) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349C38u;
    // 0x349c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349c3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349c44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x349c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x349c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x349c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x349c68: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x349C68u;
    {
        const bool branch_taken_0x349c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c68) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349C70u;
}
