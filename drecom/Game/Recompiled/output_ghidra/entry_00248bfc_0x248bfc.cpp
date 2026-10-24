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

// Function: entry_00248bfc
// Address: 0x248bfc - 0x248c8c
void entry_00248bfc_0x248bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248bfc_0x248bfc");
#endif

    switch (ctx->pc) {
        case 0x248c0cu: goto label_248c0c;
        case 0x248c18u: goto label_248c18;
        case 0x248c54u: goto label_248c54;
        case 0x248c78u: goto label_248c78;
        default: break;
    }

    ctx->pc = 0x248bfcu;

    // 0x248bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248c04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248C04u;
    SET_GPR_U32(ctx, 31, 0x248C0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248C04u, 0x248C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C0Cu;
label_248c0c:
    // 0x248c0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248C10u;
    SET_GPR_U32(ctx, 31, 0x248C18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248C10u, 0x248C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C18u;
label_248c18:
    // 0x248c18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x248c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248c20: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x248C20u;
    {
        const bool branch_taken_0x248c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c20) {
            ctx->pc = 0x248C8Cu;
            return;
        }
    }
    ctx->pc = 0x248C28u;
    // 0x248c28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248c2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c30: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x248c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x248c34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x248c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x248c40: 0x24063c16  addiu       $a2, $zero, 0x3C16
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15382));
    // 0x248c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248c48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x248c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248c4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248C4Cu;
    SET_GPR_U32(ctx, 31, 0x248C54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248C4Cu, 0x248C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C54u;
label_248c54:
    // 0x248c54: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248c58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248c5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248c60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c64: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x248c68: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248c6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248c6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248c70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x248C70u;
    SET_GPR_U32(ctx, 31, 0x248C78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x248C70u, 0x248C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c7c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248c80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x248c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c84: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x248C84u;
    SET_GPR_U32(ctx, 31, 0x248C8Cu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x248C84u, 0x248C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C8Cu;
}
