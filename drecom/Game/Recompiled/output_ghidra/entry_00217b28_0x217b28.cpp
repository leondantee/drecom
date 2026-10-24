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

// Function: entry_00217b28
// Address: 0x217b28 - 0x217bd0
void entry_00217b28_0x217b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217b28_0x217b28");
#endif

    switch (ctx->pc) {
        case 0x217b84u: goto label_217b84;
        case 0x217b90u: goto label_217b90;
        case 0x217ba0u: goto label_217ba0;
        case 0x217bacu: goto label_217bac;
        case 0x217bbcu: goto label_217bbc;
        case 0x217bc8u: goto label_217bc8;
        default: break;
    }

    ctx->pc = 0x217b28u;

    // 0x217b28: 0x2546cf00  addiu       $a2, $t2, -0x3100
    ctx->pc = 0x217b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954752));
    // 0x217b2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x217b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x217b30: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x217b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x217b34: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x217b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217b38: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x217b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x217b3c: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x217b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x217b40: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x217b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x217b44: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x217b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x217b48: 0xdd42cf00  ld          $v0, -0x3100($t2)
    ctx->pc = 0x217b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294954752)));
    // 0x217b4c: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x217b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x217b50: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x217b50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x217b54: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x217b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x217b58: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x217b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x217b5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x217b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x217b60: 0xfd42cf00  sd          $v0, -0x3100($t2)
    ctx->pc = 0x217b60u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294954752), GPR_U64(ctx, 2));
    // 0x217b64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x217b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b68: 0xa145cf00  sb          $a1, -0x3100($t2)
    ctx->pc = 0x217b68u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294954752), (uint8_t)GPR_U32(ctx, 5));
    // 0x217b6c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x217b70: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x217b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x217b74: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x217b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x217b78: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x217b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x217b7c: 0xc0854a6  jal         func_215298
    ctx->pc = 0x217B7Cu;
    SET_GPR_U32(ctx, 31, 0x217B84u);
    ctx->pc = 0x217B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B7Cu;
    // 0x217b80: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x217B84u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217B84u) { return; }
    ctx->pc = 0x217B84u;
label_217b84:
    // 0x217b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b88: 0xc084b78  jal         func_212DE0
    ctx->pc = 0x217B88u;
    SET_GPR_U32(ctx, 31, 0x217B90u);
    ctx->pc = 0x217B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B88u;
    // 0x217b8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DE0u;
    {
        ctx->pc = 0x217B90u;
        ps2_stubs::sceSifSetDma(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217B90u) { return; }
    ctx->pc = 0x217B90u;
label_217b90:
    // 0x217b90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x217B90u;
    {
        const bool branch_taken_0x217b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B90u;
        // 0x217b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b90) {
            ctx->pc = 0x217BD0u;
            return;
        }
    }
    ctx->pc = 0x217B98u;
    // 0x217b98: 0xc084b88  jal         func_212E20
    ctx->pc = 0x217B98u;
    SET_GPR_U32(ctx, 31, 0x217BA0u);
    ctx->pc = 0x217B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B98u;
    // 0x217b9c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x217BA0u;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217BA0u) { return; }
    ctx->pc = 0x217BA0u;
label_217ba0:
    // 0x217ba0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x217ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217ba4: 0xc084b88  jal         func_212E20
    ctx->pc = 0x217BA4u;
    SET_GPR_U32(ctx, 31, 0x217BACu);
    ctx->pc = 0x217BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA4u;
    // 0x217ba8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x217BACu;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217BACu) { return; }
    ctx->pc = 0x217BACu;
label_217bac:
    // 0x217bac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x217bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x217bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bb4: 0xc084b88  jal         func_212E20
    ctx->pc = 0x217BB4u;
    SET_GPR_U32(ctx, 31, 0x217BBCu);
    ctx->pc = 0x217BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BB4u;
    // 0x217bb8: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x217BBCu;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217BBCu) { return; }
    ctx->pc = 0x217BBCu;
label_217bbc:
    // 0x217bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x217bc0: 0xc084b88  jal         func_212E20
    ctx->pc = 0x217BC0u;
    SET_GPR_U32(ctx, 31, 0x217BC8u);
    ctx->pc = 0x217BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BC0u;
    // 0x217bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x217BC8u;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217BC8u) { return; }
    ctx->pc = 0x217BC8u;
label_217bc8:
    // 0x217bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217BC8u;
    {
        const bool branch_taken_0x217bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BC8u;
        // 0x217bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bc8) {
            ctx->pc = 0x217BD4u;
            return;
        }
    }
    ctx->pc = 0x217BD0u;
}
