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

// Function: entry_00370160
// Address: 0x370160 - 0x37019c
void entry_00370160_0x370160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370160_0x370160");
#endif

    switch (ctx->pc) {
        case 0x370188u: goto label_370188;
        default: break;
    }

    ctx->pc = 0x370160u;

    // 0x370160: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x370160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x370164: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x370164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x370168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37016c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370174: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x370174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x370178: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x370178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37017c: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x37017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x370180: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x370180u;
    SET_GPR_U32(ctx, 31, 0x370188u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x370180u, 0x370188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370188u;
label_370188:
    // 0x370188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x370188u;
    {
        const bool branch_taken_0x370188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370188) {
            ctx->pc = 0x37019Cu;
            return;
        }
    }
    ctx->pc = 0x370190u;
    // 0x370190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370194: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370198: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x370198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x37019cu;
}
