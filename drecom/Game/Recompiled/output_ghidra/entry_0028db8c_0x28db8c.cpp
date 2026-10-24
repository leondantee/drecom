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

// Function: entry_0028db8c
// Address: 0x28db8c - 0x28dc18
void entry_0028db8c_0x28db8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028db8c_0x28db8c");
#endif

    switch (ctx->pc) {
        case 0x28dc0cu: goto label_28dc0c;
        default: break;
    }

    ctx->pc = 0x28db8cu;

    // 0x28db8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28db8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28db90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28db94: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28db98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28db9c: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28db9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28dba0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dba4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dba8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28DBA8u;
    {
        const bool branch_taken_0x28dba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dba8) {
            ctx->pc = 0x28DC18u;
            return;
        }
    }
    ctx->pc = 0x28DBB0u;
    // 0x28dbb0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x28dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28dbb4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28dbb8: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28dbbc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28dbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28dbc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28dbc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28dbc4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28dbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28dbcc: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28dbd0: 0xafb300f8  sw          $s3, 0xF8($sp)
    ctx->pc = 0x28dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 19));
    // 0x28dbd4: 0x8fb400f8  lw          $s4, 0xF8($sp)
    ctx->pc = 0x28dbd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x28dbd8: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x28dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x28dbdc: 0x344300a4  ori         $v1, $v0, 0xA4
    ctx->pc = 0x28dbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x28dbe0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x28dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x28dbe4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28dbe8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dbec: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x28dbf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28dbf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28dbf4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28dbf8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28dbfc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28dbfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28dc00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28dc00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28dc04: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28DC04u;
    SET_GPR_U32(ctx, 31, 0x28DC0Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28DC04u, 0x28DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC0Cu;
label_28dc0c:
    // 0x28dc0c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x28dc10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DC10u;
    {
        const bool branch_taken_0x28dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc10) {
            ctx->pc = 0x28DC38u;
            return;
        }
    }
    ctx->pc = 0x28DC18u;
}
