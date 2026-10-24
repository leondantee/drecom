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

// Function: entry_0026db7c
// Address: 0x26db7c - 0x26dbf4
void entry_0026db7c_0x26db7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026db7c_0x26db7c");
#endif

    switch (ctx->pc) {
        case 0x26dba0u: goto label_26dba0;
        case 0x26dbb0u: goto label_26dbb0;
        default: break;
    }

    ctx->pc = 0x26db7cu;

    // 0x26db7c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26db7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26db80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26db84: 0x3063000a  andi        $v1, $v1, 0xA
    ctx->pc = 0x26db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10);
    // 0x26db88: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x26DB88u;
    {
        const bool branch_taken_0x26db88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db88) {
            ctx->pc = 0x26DCD8u;
            return;
        }
    }
    ctx->pc = 0x26DB90u;
    // 0x26db90: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26db90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26db94: 0x260512c0  addiu       $a1, $s0, 0x12C0
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    // 0x26db98: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26DB98u;
    SET_GPR_U32(ctx, 31, 0x26DBA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26DB98u, 0x26DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBA0u;
label_26dba0:
    // 0x26dba0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26dba4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26dba8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x26DBA8u;
    SET_GPR_U32(ctx, 31, 0x26DBB0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26DBA8u, 0x26DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBB0u;
label_26dbb0:
    // 0x26dbb0: 0x3c0344b2  lui         $v1, 0x44B2
    ctx->pc = 0x26dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17586 << 16));
    // 0x26dbb4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x26dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x26dbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26dbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dbbc: 0x0  nop
    ctx->pc = 0x26dbbcu;
    // NOP
    // 0x26dbc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26dbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26dbc4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26dbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26dbc8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26dbc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dbcc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26dbd0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x26dbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26dbd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DBD4u;
    {
        const bool branch_taken_0x26dbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbd4) {
            ctx->pc = 0x26DBF4u;
            return;
        }
    }
    ctx->pc = 0x26DBDCu;
    // 0x26dbdc: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dbe0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dbe8: 0x0  nop
    ctx->pc = 0x26dbe8u;
    // NOP
    // 0x26dbec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26dbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26dbf0: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    ctx->pc = 0x26dbf4u;
}
