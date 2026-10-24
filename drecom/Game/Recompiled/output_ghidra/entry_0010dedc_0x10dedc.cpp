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

// Function: entry_0010dedc
// Address: 0x10dedc - 0x10df48
void entry_0010dedc_0x10dedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dedc_0x10dedc");
#endif

    switch (ctx->pc) {
        case 0x10df24u: goto label_10df24;
        default: break;
    }

    ctx->pc = 0x10dedcu;

    // 0x10dedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dee0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10dee4: 0xac8245f8  sw          $v0, 0x45F8($a0)
    ctx->pc = 0x10dee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10dee8: 0x248345f8  addiu       $v1, $a0, 0x45F8
    ctx->pc = 0x10dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 17912));
    // 0x10deec: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10deecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10def0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10def0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10def4: 0x24a43e80  addiu       $a0, $a1, 0x3E80
    ctx->pc = 0x10def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x10def8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10def8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10defc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10df00: 0x24080314  addiu       $t0, $zero, 0x314
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
    // 0x10df04: 0xaca245c4  sw          $v0, 0x45C4($a1)
    ctx->pc = 0x10df04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10df08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10df08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df0c: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x10df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x10df10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10df10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10df14: 0x244bd128  addiu       $t3, $v0, -0x2ED8
    ctx->pc = 0x10df14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955304));
    // 0x10df18: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x10df18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10df1c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10DF1Cu;
    SET_GPR_U32(ctx, 31, 0x10DF24u);
    ctx->pc = 0x10DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF1Cu;
    // 0x10df20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10DF24u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DF24u) { return; }
    ctx->pc = 0x10DF24u;
label_10df24:
    // 0x10df24: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DF24u;
    {
        const bool branch_taken_0x10df24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10df24) {
            ctx->pc = 0x10DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF24u;
            // 0x10df28: 0x8fc245a8  lw          $v0, 0x45A8($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 17832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DF50u;
            return;
        }
    }
    ctx->pc = 0x10DF2Cu;
    // 0x10df2c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10df30: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10df30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10df34: 0xac8045f8  sw          $zero, 0x45F8($a0)
    ctx->pc = 0x10df34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10df38: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10df3c: 0xaca045c4  sw          $zero, 0x45C4($a1)
    ctx->pc = 0x10df3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10df40: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DF40u;
    SET_GPR_U32(ctx, 31, 0x10DF48u);
    ctx->pc = 0x10DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF40u;
    // 0x10df44: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DF48u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DF48u) { return; }
    ctx->pc = 0x10DF48u;
}
