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

// Function: exponent
// Address: 0x11ca50 - 0x11cb30
void exponent_0x11ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exponent_0x11ca50");
#endif

    switch (ctx->pc) {
        case 0x11ca98u: goto label_11ca98;
        case 0x11cae8u: goto label_11cae8;
        default: break;
    }

    ctx->pc = 0x11ca50u;

    // 0x11ca50: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x11ca54: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CA54u;
    {
        const bool branch_taken_0x11ca54 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA54u;
        // 0x11ca58: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca54) {
            ctx->pc = 0x11CA70u;
            goto label_11ca70;
        }
    }
    ctx->pc = 0x11CA5Cu;
    // 0x11ca5c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x11ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11ca60: 0x52823  negu        $a1, $a1
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x11ca64: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x11ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x11ca68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11CA68u;
    {
        const bool branch_taken_0x11ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA68u;
        // 0x11ca6c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca68) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CA70u;
label_11ca70:
    // 0x11ca70: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x11ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x11ca74: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x11ca74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x11ca78: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x11ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_11ca7c:
    // 0x11ca7c: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x11ca80: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x11ca80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x11ca84: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11CA84u;
    {
        const bool branch_taken_0x11ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA84u;
        // 0x11ca88: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca84) {
            ctx->pc = 0x11CB0Cu;
            goto label_11cb0c;
        }
    }
    ctx->pc = 0x11CA8Cu;
    // 0x11ca8c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11ca8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11ca90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ca90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca94: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x11ca94u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_11ca98:
    // 0x11ca98: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CA98u;
    {
        const bool branch_taken_0x11ca98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x11ca98) {
            ctx->pc = 0x11CA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA98u;
            // 0x11ca9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CAA0u;
            goto label_11caa0;
        }
    }
    ctx->pc = 0x11CAA0u;
label_11caa0:
    // 0x11caa0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11caa4: 0x1010  mfhi        $v0
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11caa8: 0x1812  mflo        $v1
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x11caac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x11cab0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11cab4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11cab8: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x11cabc: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CABCu;
    {
        const bool branch_taken_0x11cabc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x11cabc) {
            ctx->pc = 0x11CAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CABCu;
            // 0x11cac0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CAC4u;
            goto label_11cac4;
        }
    }
    ctx->pc = 0x11CAC4u;
label_11cac4:
    // 0x11cac4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CAC4u;
    {
        const bool branch_taken_0x11cac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cac4) {
            ctx->pc = 0x11CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CAC4u;
            // 0x11cac8: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ca98;
        }
    }
    ctx->pc = 0x11CACCu;
    // 0x11cacc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11cad0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x11cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x11cad4: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11cad8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11CAD8u;
    {
        const bool branch_taken_0x11cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAD8u;
        // 0x11cadc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cad8) {
            ctx->pc = 0x11CB24u;
            goto label_11cb24;
        }
    }
    ctx->pc = 0x11CAE0u;
    // 0x11cae0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x11cae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cae4: 0x0  nop
    ctx->pc = 0x11cae4u;
    // NOP
label_11cae8:
    // 0x11cae8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x11cae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11caec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11caf0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x11caf0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11caf4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x11caf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11caf8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11cafc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CAFCu;
    {
        const bool branch_taken_0x11cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cafc) {
            ctx->pc = 0x11CAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cae8;
        }
    }
    ctx->pc = 0x11CB04u;
    // 0x11cb04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB04u;
    {
        const bool branch_taken_0x11cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB04u;
        // 0x11cb08: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb04) {
            ctx->pc = 0x11CB28u;
            goto label_11cb28;
        }
    }
    ctx->pc = 0x11CB0Cu;
label_11cb0c:
    // 0x11cb0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x11cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11cb10: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x11cb14: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x11cb14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11cb18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11cb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11cb1c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x11cb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11cb20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_11cb24:
    // 0x11cb24: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_11cb28:
    // 0x11cb28: 0x3e00008  jr          $ra
    ctx->pc = 0x11CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB28u;
        // 0x11cb2c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CB30u;
}
