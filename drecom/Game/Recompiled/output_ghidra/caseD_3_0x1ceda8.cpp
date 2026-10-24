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

// Function: caseD_3
// Address: 0x1ceda8 - 0x1cee3c
void caseD_3_0x1ceda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ceda8");
#endif

    switch (ctx->pc) {
        case 0x1cee08u: goto label_1cee08;
        case 0x1cee34u: goto label_1cee34;
        default: break;
    }

    ctx->pc = 0x1ceda8u;

    // 0x1ceda8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cedac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1cedacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cedb0: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1cedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
    // 0x1cedb4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1cedb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1cedb8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1cedbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cedc0: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1cedc4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CEDC4u;
    {
        const bool branch_taken_0x1cedc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedc4) {
            ctx->pc = 0x1CEE3Cu;
            return;
        }
    }
    ctx->pc = 0x1CEDCCu;
    // 0x1cedcc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cedd0: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cedd4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cedd8: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cedd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ceddc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cede0: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cede4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CEDE4u;
    {
        const bool branch_taken_0x1cede4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cede4) {
            ctx->pc = 0x1CEE3Cu;
            return;
        }
    }
    ctx->pc = 0x1CEDECu;
    // 0x1cedec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cedecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cedf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cedf4: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cedf8: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1cedfc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cee00: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CEE00u;
    SET_GPR_U32(ctx, 31, 0x1CEE08u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CEE00u, 0x1CEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE08u;
label_1cee08:
    // 0x1cee08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee0c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cee10: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee18: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1cee18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1cee1c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cee20: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cee20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cee24: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1cee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cee28: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1cee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cee2c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CEE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE34u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CEE2Cu, 0x1CEE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE34u;
label_1cee34:
    // 0x1cee34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cee38: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x1cee3cu;
}
