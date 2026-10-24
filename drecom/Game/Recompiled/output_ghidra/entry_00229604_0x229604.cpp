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

// Function: entry_00229604
// Address: 0x229604 - 0x229678
void entry_00229604_0x229604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229604_0x229604");
#endif

    ctx->pc = 0x229604u;

    // 0x229604: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229608: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x229608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22960c: 0x3c07451c  lui         $a3, 0x451C
    ctx->pc = 0x22960cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17692 << 16));
    // 0x229610: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x229610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x229614: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x229614u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229618: 0x0  nop
    ctx->pc = 0x229618u;
    // NOP
    // 0x22961c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22961cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229620: 0x0  nop
    ctx->pc = 0x229620u;
    // NOP
    // 0x229624: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x229624u;
    {
        const bool branch_taken_0x229624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229624) {
            ctx->pc = 0x229678u;
            return;
        }
    }
    ctx->pc = 0x22962Cu;
    // 0x22962c: 0x3c084248  lui         $t0, 0x4248
    ctx->pc = 0x22962cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16968 << 16));
    // 0x229630: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x229630u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229638: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22963c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x229640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229644: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x229648: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x229648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22964c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22964cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x229650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x229650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x229654: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x229654u;
    {
        const bool branch_taken_0x229654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229654) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x22965Cu;
    // 0x22965c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x229660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229664: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229668: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x229668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22966c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229670: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x229670u;
    {
        const bool branch_taken_0x229670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229670) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x229678u;
}
