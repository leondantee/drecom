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

// Function: entry_001c9fb4
// Address: 0x1c9fb4 - 0x1ca004
void entry_001c9fb4_0x1c9fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9fb4_0x1c9fb4");
#endif

    ctx->pc = 0x1c9fb4u;

    // 0x1c9fb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fb8: 0xc4601388  lwc1        $f0, 0x1388($v1)
    ctx->pc = 0x1c9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fc0: 0xe4601b5c  swc1        $f0, 0x1B5C($v1)
    ctx->pc = 0x1c9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7004), bits); }
    // 0x1c9fc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fc8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1c9fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1c9fcc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c9fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c9fd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c9fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9fd4: 0x10a301bd  beq         $a1, $v1, . + 4 + (0x1BD << 2)
    ctx->pc = 0x1C9FD4u;
    {
        const bool branch_taken_0x1c9fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9fd4) {
            ctx->pc = 0x1CA6CCu;
            return;
        }
    }
    ctx->pc = 0x1C9FDCu;
    // 0x1c9fdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9fe0: 0x10a401a1  beq         $a1, $a0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x1C9FE0u;
    {
        const bool branch_taken_0x1c9fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c9fe0) {
            ctx->pc = 0x1CA668u;
            return;
        }
    }
    ctx->pc = 0x1C9FE8u;
    // 0x1c9fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9fec: 0x10a3004a  beq         $a1, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C9FECu;
    {
        const bool branch_taken_0x1c9fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9fec) {
            ctx->pc = 0x1CA118u;
            return;
        }
    }
    ctx->pc = 0x1C9FF4u;
    // 0x1c9ff4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA004u;
            return;
        }
    }
    ctx->pc = 0x1C9FFCu;
    // 0x1c9ffc: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x1C9FFCu;
    {
        const bool branch_taken_0x1c9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ffc) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA004u;
}
