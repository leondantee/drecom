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

// Function: entry_00109da4
// Address: 0x109da4 - 0x109df0
void entry_00109da4_0x109da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109da4_0x109da4");
#endif

    switch (ctx->pc) {
        case 0x109dd8u: goto label_109dd8;
        default: break;
    }

    ctx->pc = 0x109da4u;

    // 0x109da4: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x109da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x109da8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x109da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x109dac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x109db0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109db0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109db4: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x109db8: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x109dbc: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x109dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x109dc0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x109dc4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x109DC4u;
    {
        const bool branch_taken_0x109dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x109DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DC4u;
        // 0x109dc8: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dc4) {
            ctx->pc = 0x109DF0u;
            return;
        }
    }
    ctx->pc = 0x109DCCu;
    // 0x109dcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dd0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109DD0u;
    SET_GPR_U32(ctx, 31, 0x109DD8u);
    ctx->pc = 0x109DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DD0u;
    // 0x109dd4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109DD0u, 0x109DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DD8u;
label_109dd8:
    // 0x109dd8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109ddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109de0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109de4: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x109de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x109de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x109de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x109dec: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x109decu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x109df0u;
}
