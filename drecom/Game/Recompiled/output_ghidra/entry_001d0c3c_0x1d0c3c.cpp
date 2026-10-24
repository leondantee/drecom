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

// Function: entry_001d0c3c
// Address: 0x1d0c3c - 0x1d0d38
void entry_001d0c3c_0x1d0c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0c3c_0x1d0c3c");
#endif

    switch (ctx->pc) {
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cd8u: goto label_1d0cd8;
        default: break;
    }

    ctx->pc = 0x1d0c3cu;

    // 0x1d0c3c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1d0c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d0c40: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x1d0c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0c44: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x1D0C44u;
    {
        const bool branch_taken_0x1d0c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c44) {
            ctx->pc = 0x1D10D4u;
            return;
        }
    }
    ctx->pc = 0x1D0C4Cu;
    // 0x1d0c4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c50: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0c54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d0c58: 0x24469240  addiu       $a2, $v0, -0x6DC0
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x1d0c5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0C64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0C64u) { return; }
    ctx->pc = 0x1D0C64u;
label_1d0c64:
    // 0x1d0c64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c70: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d0c74: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D0C74u;
    SET_GPR_U32(ctx, 31, 0x1D0C7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D0C74u, 0x1D0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C7Cu;
label_1d0c7c:
    // 0x1d0c7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0c80: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d0c84: 0x24459250  addiu       $a1, $v0, -0x6DB0
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    // 0x1d0c88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c8c: 0xc040c12  jal         func_103048
    ctx->pc = 0x1D0C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C94u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1D0C94u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0C94u) { return; }
    ctx->pc = 0x1D0C94u;
label_1d0c94:
    // 0x1d0c94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0c98: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0ca0: 0xc040c12  jal         func_103048
    ctx->pc = 0x1D0CA0u;
    SET_GPR_U32(ctx, 31, 0x1D0CA8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1D0CA8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CA8u) { return; }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0cac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0cb0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CB0u;
    SET_GPR_U32(ctx, 31, 0x1D0CB8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CB8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CB8u) { return; }
    ctx->pc = 0x1D0CB8u;
label_1d0cb8:
    // 0x1d0cb8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d0cbc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0cc0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CC8u) { return; }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d0ccc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d0cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0cd0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CD0u;
    SET_GPR_U32(ctx, 31, 0x1D0CD8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CD8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CD8u) { return; }
    ctx->pc = 0x1D0CD8u;
label_1d0cd8:
    // 0x1d0cd8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0cdc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d0ce0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ce0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0ce4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0ce8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0cec: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d0cf0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0cf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0cf8: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x1D0CF8u;
    {
        const bool branch_taken_0x1d0cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0cf8) {
            ctx->pc = 0x1D1074u;
            return;
        }
    }
    ctx->pc = 0x1D0D00u;
    // 0x1d0d00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0d04: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D0D04u;
    {
        const bool branch_taken_0x1d0d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d04) {
            ctx->pc = 0x1D0F34u;
            return;
        }
    }
    ctx->pc = 0x1D0D0Cu;
    // 0x1d0d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0d10: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D0D10u;
    {
        const bool branch_taken_0x1d0d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d10) {
            ctx->pc = 0x1D0EA0u;
            return;
        }
    }
    ctx->pc = 0x1D0D18u;
    // 0x1d0d18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d0d1c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0D1Cu;
    {
        const bool branch_taken_0x1d0d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d1c) {
            ctx->pc = 0x1D0D98u;
            return;
        }
    }
    ctx->pc = 0x1D0D24u;
    // 0x1d0d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0D28u;
    {
        const bool branch_taken_0x1d0d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d28) {
            ctx->pc = 0x1D0D38u;
            return;
        }
    }
    ctx->pc = 0x1D0D30u;
    // 0x1d0d30: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1D0D30u;
    {
        const bool branch_taken_0x1d0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d30) {
            ctx->pc = 0x1D10E8u;
            return;
        }
    }
    ctx->pc = 0x1D0D38u;
}
