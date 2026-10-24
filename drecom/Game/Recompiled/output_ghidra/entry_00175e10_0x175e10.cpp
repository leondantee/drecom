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

// Function: entry_00175e10
// Address: 0x175e10 - 0x175ec8
void entry_00175e10_0x175e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e10_0x175e10");
#endif

    switch (ctx->pc) {
        case 0x175ea4u: goto label_175ea4;
        default: break;
    }

    ctx->pc = 0x175e10u;

    // 0x175e10: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e20: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e24: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e2c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x175e30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x175e34: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x175e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x175e38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x175e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x175e3c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x175E3Cu;
    {
        const bool branch_taken_0x175e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e3c) {
            ctx->pc = 0x175F70u;
            return;
        }
    }
    ctx->pc = 0x175E44u;
    // 0x175e44: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e50: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e58: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e60: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x175e64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x175e64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e68: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175e6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175e70: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e84: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e8c: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x175e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175e90: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x175e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x175e94: 0x26c400e0  addiu       $a0, $s6, 0xE0
    ctx->pc = 0x175e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x175e98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x175e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175e9c: 0xc05da44  jal         func_176910
    ctx->pc = 0x175E9Cu;
    SET_GPR_U32(ctx, 31, 0x175EA4u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x175E9Cu, 0x175EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EA4u;
label_175ea4:
    // 0x175ea4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x175ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175ea8: 0x0  nop
    ctx->pc = 0x175ea8u;
    // NOP
    // 0x175eac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175EC8u;
            return;
        }
    }
    ctx->pc = 0x175EB4u;
    // 0x175eb4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x175eb4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x175eb8: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x175eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x175ebc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ec0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x175ec0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ec4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175ec4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->pc = 0x175ec8u;
}
