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

// Function: entry_00228bcc
// Address: 0x228bcc - 0x228c40
void entry_00228bcc_0x228bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228bcc_0x228bcc");
#endif

    ctx->pc = 0x228bccu;

    // 0x228bcc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228bd0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228bd4: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x228bd8: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x228bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x228bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x228bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228be0: 0x0  nop
    ctx->pc = 0x228be0u;
    // NOP
    // 0x228be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228be8: 0x0  nop
    ctx->pc = 0x228be8u;
    // NOP
    // 0x228bec: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x228BECu;
    {
        const bool branch_taken_0x228bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228bec) {
            ctx->pc = 0x228C40u;
            return;
        }
    }
    ctx->pc = 0x228BF4u;
    // 0x228bf4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x228bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x228bf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228c04: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228c08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c0c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x228c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228c10: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x228c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x228c14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228c14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x228c18: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x228c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x228c1c: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x228C1Cu;
    {
        const bool branch_taken_0x228c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c1c) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228C24u;
    // 0x228c24: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x228c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x228c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c30: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228c34: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x228c38: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x228C38u;
    {
        const bool branch_taken_0x228c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c38) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228C40u;
}
