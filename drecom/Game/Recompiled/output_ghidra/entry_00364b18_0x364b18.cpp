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

// Function: entry_00364b18
// Address: 0x364b18 - 0x364b9c
void entry_00364b18_0x364b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364b18_0x364b18");
#endif

    ctx->pc = 0x364b18u;

    // 0x364b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b1c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x364b28: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x364B28u;
    {
        const bool branch_taken_0x364b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b28) {
            ctx->pc = 0x364C48u;
            return;
        }
    }
    ctx->pc = 0x364B30u;
    // 0x364b30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b34: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364b38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364b3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x364b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x364b40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x364B40u;
    {
        const bool branch_taken_0x364b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b40) {
            ctx->pc = 0x364B9Cu;
            return;
        }
    }
    ctx->pc = 0x364B48u;
    // 0x364b48: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364b4c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x364b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x364b50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b58: 0x0  nop
    ctx->pc = 0x364b58u;
    // NOP
    // 0x364b5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x364b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364b60: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364b64: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364b68: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x364b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x364b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b74: 0x0  nop
    ctx->pc = 0x364b74u;
    // NOP
    // 0x364b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364b7c: 0x0  nop
    ctx->pc = 0x364b7cu;
    // NOP
    // 0x364b80: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x364B80u;
    {
        const bool branch_taken_0x364b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364b80) {
            ctx->pc = 0x364B9Cu;
            return;
        }
    }
    ctx->pc = 0x364B88u;
    // 0x364b88: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x364b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x364b8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b94: 0x0  nop
    ctx->pc = 0x364b94u;
    // NOP
    // 0x364b98: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x364b9cu;
}
