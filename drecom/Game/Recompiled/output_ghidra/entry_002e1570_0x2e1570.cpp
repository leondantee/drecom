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

// Function: entry_002e1570
// Address: 0x2e1570 - 0x2e15d0
void entry_002e1570_0x2e1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1570_0x2e1570");
#endif

    switch (ctx->pc) {
        case 0x2e158cu: goto label_2e158c;
        case 0x2e1594u: goto label_2e1594;
        default: break;
    }

    ctx->pc = 0x2e1570u;

    // 0x2e1570: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e1570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1574: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e1578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e157c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1580: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e1580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e1584: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E1584u;
    SET_GPR_U32(ctx, 31, 0x2E158Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E1584u, 0x2E158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E158Cu;
label_2e158c:
    // 0x2e158c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E158Cu;
    SET_GPR_U32(ctx, 31, 0x2E1594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E158Cu, 0x2E1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1594u;
label_2e1594:
    // 0x2e1594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1598: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e159c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e15a0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E15A0u;
    {
        const bool branch_taken_0x2e15a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15a0) {
            ctx->pc = 0x2E1618u;
            return;
        }
    }
    ctx->pc = 0x2E15A8u;
    // 0x2e15a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e15ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E15ACu;
    {
        const bool branch_taken_0x2e15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15ac) {
            ctx->pc = 0x2E1600u;
            return;
        }
    }
    ctx->pc = 0x2E15B4u;
    // 0x2e15b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e15b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E15B8u;
    {
        const bool branch_taken_0x2e15b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15b8) {
            ctx->pc = 0x2E15E8u;
            return;
        }
    }
    ctx->pc = 0x2E15C0u;
    // 0x2e15c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E15C0u;
    {
        const bool branch_taken_0x2e15c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15c0) {
            ctx->pc = 0x2E15D0u;
            return;
        }
    }
    ctx->pc = 0x2E15C8u;
    // 0x2e15c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E15C8u;
    {
        const bool branch_taken_0x2e15c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15c8) {
            ctx->pc = 0x2E1628u;
            return;
        }
    }
    ctx->pc = 0x2E15D0u;
}
