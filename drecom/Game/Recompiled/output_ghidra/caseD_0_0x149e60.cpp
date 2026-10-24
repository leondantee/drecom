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

// Function: caseD_0
// Address: 0x149e60 - 0x149f10
void caseD_0_0x149e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x149e60");
#endif

    switch (ctx->pc) {
        case 0x149efcu: goto label_149efc;
        default: break;
    }

    ctx->pc = 0x149e60u;

    // 0x149e60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x149e64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e68: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x149e68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x149e6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e70: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x149e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149e74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x149e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x149e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149e7c: 0x0  nop
    ctx->pc = 0x149e7cu;
    // NOP
    // 0x149e80: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x149e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149e84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149e8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x149e8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x149e90: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x149e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149e98: 0x0  nop
    ctx->pc = 0x149e98u;
    // NOP
    // 0x149e9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149e9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x149ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ea4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x149ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x149ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149eac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x149eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x149eb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x149eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149eb4: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x149eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149eb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x149eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x149ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ec0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x149ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ec8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x149ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x149ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149ed0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x149ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x149ed4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x149ED4u;
    {
        const bool branch_taken_0x149ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ed4) {
            ctx->pc = 0x149F10u;
            return;
        }
    }
    ctx->pc = 0x149EDCu;
    // 0x149edc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ee4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149ee8: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x149eec: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x149ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149ef4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149EF4u;
    SET_GPR_U32(ctx, 31, 0x149EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149EF4u, 0x149EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EFCu;
label_149efc:
    // 0x149efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149f00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f04: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x149f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x149f08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F38u;
            return;
        }
    }
    ctx->pc = 0x149F10u;
}
