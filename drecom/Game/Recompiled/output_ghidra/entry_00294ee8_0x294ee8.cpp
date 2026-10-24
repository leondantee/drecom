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

// Function: entry_00294ee8
// Address: 0x294ee8 - 0x294f9c
void entry_00294ee8_0x294ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294ee8_0x294ee8");
#endif

    switch (ctx->pc) {
        case 0x294ef4u: goto label_294ef4;
        case 0x294f78u: goto label_294f78;
        case 0x294f90u: goto label_294f90;
        default: break;
    }

    ctx->pc = 0x294ee8u;

    // 0x294ee8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294eec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x294EECu;
    SET_GPR_U32(ctx, 31, 0x294EF4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x294EF4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294EF4u) { return; }
    ctx->pc = 0x294EF4u;
label_294ef4:
    // 0x294ef4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x294ef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x294ef8: 0x26760058  addiu       $s6, $s3, 0x58
    ctx->pc = 0x294ef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x294efc: 0x26770068  addiu       $s7, $s3, 0x68
    ctx->pc = 0x294efcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x294f00: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x294f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x294f04: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x294f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x294f08: 0x267400e0  addiu       $s4, $s3, 0xE0
    ctx->pc = 0x294f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x294f0c: 0x267200a0  addiu       $s2, $s3, 0xA0
    ctx->pc = 0x294f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x294f10: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x294f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x294f14: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x294f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x294f18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294f1c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x294f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x294f20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294f24: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x294f28: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x294f28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x294f2c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x294f30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x294f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294f34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x294f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x294f38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x294f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294f3c: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x294f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x294f40: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x294f40u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x294f44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294f48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x294f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x294f4c: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x294f50: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x294f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x294f54: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x294f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x294f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294f5c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x294f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x294f60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x294f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x294f64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f68: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f6c: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x294f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x294f70: 0xc040c92  jal         func_103248
    ctx->pc = 0x294F70u;
    SET_GPR_U32(ctx, 31, 0x294F78u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x294F78u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294F78u) { return; }
    ctx->pc = 0x294F78u;
label_294f78:
    // 0x294f78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x294f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x294f80: 0x24456530  addiu       $a1, $v0, 0x6530
    ctx->pc = 0x294f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x294f84: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x294f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f88: 0xc040c00  jal         func_103000
    ctx->pc = 0x294F88u;
    SET_GPR_U32(ctx, 31, 0x294F90u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x294F90u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294F90u) { return; }
    ctx->pc = 0x294F90u;
label_294f90:
    // 0x294f90: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x294f90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x294f94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x294F94u;
    {
        const bool branch_taken_0x294f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f94) {
            ctx->pc = 0x294FD8u;
            return;
        }
    }
    ctx->pc = 0x294F9Cu;
}
