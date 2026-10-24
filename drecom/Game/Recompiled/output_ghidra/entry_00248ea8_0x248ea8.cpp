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

// Function: entry_00248ea8
// Address: 0x248ea8 - 0x248f10
void entry_00248ea8_0x248ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248ea8_0x248ea8");
#endif

    switch (ctx->pc) {
        case 0x248eb8u: goto label_248eb8;
        case 0x248ec4u: goto label_248ec4;
        case 0x248ef4u: goto label_248ef4;
        case 0x248efcu: goto label_248efc;
        default: break;
    }

    ctx->pc = 0x248ea8u;

    // 0x248ea8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248eac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248eb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248EB0u;
    SET_GPR_U32(ctx, 31, 0x248EB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248EB0u, 0x248EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EB8u;
label_248eb8:
    // 0x248eb8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ebc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248EBCu;
    SET_GPR_U32(ctx, 31, 0x248EC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248EBCu, 0x248EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EC4u;
label_248ec4:
    // 0x248ec4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ec8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x248ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248ecc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x248ECCu;
    {
        const bool branch_taken_0x248ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ecc) {
            ctx->pc = 0x248F10u;
            return;
        }
    }
    ctx->pc = 0x248ED4u;
    // 0x248ed4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ed8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248edc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x248edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x248ee0: 0x24063c16  addiu       $a2, $zero, 0x3C16
    ctx->pc = 0x248ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15382));
    // 0x248ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248ee8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x248ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248eec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248EECu;
    SET_GPR_U32(ctx, 31, 0x248EF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248EECu, 0x248EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EF4u;
label_248ef4:
    // 0x248ef4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248EF4u;
    SET_GPR_U32(ctx, 31, 0x248EFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248EF4u, 0x248EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EFCu;
label_248efc:
    // 0x248efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x248efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248f00: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x248f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x248f04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x248f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x248f08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f0c: 0xa46409ee  sh          $a0, 0x9EE($v1)
    ctx->pc = 0x248f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2542), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x248f10u;
}
