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

// Function: caseD_2
// Address: 0x1477ac - 0x147814
void caseD_2_0x1477ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1477ac");
#endif

    ctx->pc = 0x1477acu;

    // 0x1477ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1477acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1477b0: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x1477b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1477b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1477b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1477b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1477bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1477bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1477c4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1477c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1477c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1477c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1477d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1477d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1477d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1477d8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1477d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1477dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1477dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1477e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1477e4: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1477E4u;
    {
        const bool branch_taken_0x1477e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477e4) {
            ctx->pc = 0x1479ACu;
            return;
        }
    }
    ctx->pc = 0x1477ECu;
    // 0x1477ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1477f0: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1477F0u;
    {
        const bool branch_taken_0x1477f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477f0) {
            ctx->pc = 0x147928u;
            return;
        }
    }
    ctx->pc = 0x1477F8u;
    // 0x1477f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1477fc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1477FCu;
    {
        const bool branch_taken_0x1477fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477fc) {
            ctx->pc = 0x14789Cu;
            return;
        }
    }
    ctx->pc = 0x147804u;
    // 0x147804: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147804u;
    {
        const bool branch_taken_0x147804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147804) {
            ctx->pc = 0x147814u;
            return;
        }
    }
    ctx->pc = 0x14780Cu;
    // 0x14780c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14780Cu;
    {
        const bool branch_taken_0x14780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14780c) {
            ctx->pc = 0x14789Cu;
            return;
        }
    }
    ctx->pc = 0x147814u;
}
