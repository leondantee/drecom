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

// Function: entry_002e4048
// Address: 0x2e4048 - 0x2e40e0
void entry_002e4048_0x2e4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4048_0x2e4048");
#endif

    switch (ctx->pc) {
        case 0x2e4098u: goto label_2e4098;
        default: break;
    }

    ctx->pc = 0x2e4048u;

    // 0x2e4048: 0x92020064  lbu         $v0, 0x64($s0)
    ctx->pc = 0x2e4048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2e404c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e4050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4054: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2e4054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e4058: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e405c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e4060: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x2e4060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x2e4064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4068: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e4068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e406c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e4070: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2e4070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e4074: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e4078: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e4078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e407c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e4080: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2e4080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4084: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e4084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4088: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2e4088u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e408c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e4090: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x2E4090u;
    SET_GPR_U32(ctx, 31, 0x2E4098u);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x2E4090u, 0x2E4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4098u;
label_2e4098:
    // 0x2e4098: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2e4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e409c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e40a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e40a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e40a4: 0x0  nop
    ctx->pc = 0x2e40a4u;
    // NOP
    // 0x2e40a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e40a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e40ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e40acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e40b0: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2e40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40b4: 0x3c0244bc  lui         $v0, 0x44BC
    ctx->pc = 0x2e40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17596 << 16));
    // 0x2e40b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2e40b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2e40bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e40bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e40c0: 0x0  nop
    ctx->pc = 0x2e40c0u;
    // NOP
    // 0x2e40c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e40c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e40c8: 0x0  nop
    ctx->pc = 0x2e40c8u;
    // NOP
    // 0x2e40cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E40CCu;
    {
        const bool branch_taken_0x2e40cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e40cc) {
            ctx->pc = 0x2E40E0u;
            return;
        }
    }
    ctx->pc = 0x2E40D4u;
    // 0x2e40d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e40d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e40d8: 0x0  nop
    ctx->pc = 0x2e40d8u;
    // NOP
    // 0x2e40dc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e40dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->pc = 0x2e40e0u;
}
