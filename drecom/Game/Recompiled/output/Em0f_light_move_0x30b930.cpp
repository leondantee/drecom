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

// Function: Em0f_light_move
// Address: 0x30b930 - 0x30bcd0
void Em0f_light_move_0x30b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_light_move_0x30b930");
#endif

    switch (ctx->pc) {
        case 0x30b9fcu: goto label_30b9fc;
        case 0x30ba18u: goto label_30ba18;
        case 0x30ba34u: goto label_30ba34;
        case 0x30ba84u: goto label_30ba84;
        case 0x30baa0u: goto label_30baa0;
        case 0x30babcu: goto label_30babc;
        case 0x30bb7cu: goto label_30bb7c;
        case 0x30bb98u: goto label_30bb98;
        case 0x30bbb4u: goto label_30bbb4;
        case 0x30bc04u: goto label_30bc04;
        case 0x30bc20u: goto label_30bc20;
        case 0x30bc3cu: goto label_30bc3c;
        default: break;
    }

    ctx->pc = 0x30b930u;

    // 0x30b930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30b934: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30b934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30b938: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30b938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30b93c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b940: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x30b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
    // 0x30b944: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30b948: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30b948u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399900u));
    // 0x30b94c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30b950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b954: 0x2442135c  addiu       $v0, $v0, 0x135C
    ctx->pc = 0x30b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x30b958: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b95c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b960: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30b964: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30b968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30b96c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x30b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x30b970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b974: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30b978: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b97c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b984: 0x0  nop
    ctx->pc = 0x30b984u;
    // NOP
    // 0x30b988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30b988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b98c: 0x0  nop
    ctx->pc = 0x30b98cu;
    // NOP
    // 0x30b990: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x30B990u;
    {
        const bool branch_taken_0x30b990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b990) {
            ctx->pc = 0x30B9B8u;
            goto label_30b9b8;
        }
    }
    ctx->pc = 0x30B998u;
    // 0x30b998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b99c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9a0: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30b9a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x30b9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x30b9a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9ac: 0x8c621360  lw          $v0, 0x1360($v1)
    ctx->pc = 0x30b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
    // 0x30b9b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30b9b4: 0xac621360  sw          $v0, 0x1360($v1)
    ctx->pc = 0x30b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 2));
label_30b9b8:
    // 0x30b9b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9bc: 0x8c421360  lw          $v0, 0x1360($v0)
    ctx->pc = 0x30b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x30b9c0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x30B9C0u;
    {
        const bool branch_taken_0x30b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9c0) {
            ctx->pc = 0x30BB48u;
            goto label_30bb48;
        }
    }
    ctx->pc = 0x30B9C8u;
    // 0x30b9c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b9d0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x30b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30b9d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30b9d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b9d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30b9e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b9e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9f0: 0x244603b0  addiu       $a2, $v0, 0x3B0
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x30b9f4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30B9F4u;
    SET_GPR_U32(ctx, 31, 0x30B9FCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30B9F4u, 0x30B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9FCu;
label_30b9fc:
    // 0x30b9fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba00: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30ba04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba0c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ba10: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BA10u;
    SET_GPR_U32(ctx, 31, 0x30BA18u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BA10u, 0x30BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA18u;
label_30ba18:
    // 0x30ba18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba28: 0x244603b0  addiu       $a2, $v0, 0x3B0
    ctx->pc = 0x30ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x30ba2c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BA2Cu;
    SET_GPR_U32(ctx, 31, 0x30BA34u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BA2Cu, 0x30BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA34u;
label_30ba34:
    // 0x30ba34: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ba38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba40: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x30ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x30ba44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba48: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x30ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x30ba4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ba50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba58: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x30ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30ba5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ba5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba60: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ba68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba74: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba78: 0x24460430  addiu       $a2, $v0, 0x430
    ctx->pc = 0x30ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30ba7c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BA7Cu;
    SET_GPR_U32(ctx, 31, 0x30BA84u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BA7Cu, 0x30BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA84u;
label_30ba84:
    // 0x30ba84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba88: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30ba8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ba98: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BA98u;
    SET_GPR_U32(ctx, 31, 0x30BAA0u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BA98u, 0x30BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAA0u;
label_30baa0:
    // 0x30baa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30baa4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30baa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30baac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30baacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bab0: 0x24460430  addiu       $a2, $v0, 0x430
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30bab4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BAB4u;
    SET_GPR_U32(ctx, 31, 0x30BABCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BAB4u, 0x30BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BABCu;
label_30babc:
    // 0x30babc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bac0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x30bac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bac8: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30bacc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bad0: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x30bad4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30bad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30badc: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x30bae0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bae4: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bae8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30baec: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30baecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30baf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30baf4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30baf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bafc: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bb00: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bb04: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30bb08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb0c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x30bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x30bb10: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bb14: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bb18: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bb1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bb20: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bb24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb28: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bb2c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bb30: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bb34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bb38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bb3c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bb40: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x30BB40u;
    {
        const bool branch_taken_0x30bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb40) {
            ctx->pc = 0x30BCC0u;
            goto label_30bcc0;
        }
    }
    ctx->pc = 0x30BB48u;
label_30bb48:
    // 0x30bb48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bb50: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x30bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30bb54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bb54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bb58: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bb60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bb68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb70: 0x244603f0  addiu       $a2, $v0, 0x3F0
    ctx->pc = 0x30bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30bb74: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BB74u;
    SET_GPR_U32(ctx, 31, 0x30BB7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BB74u, 0x30BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB7Cu;
label_30bb7c:
    // 0x30bb7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb80: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30bb84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb8c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30bb90: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BB90u;
    SET_GPR_U32(ctx, 31, 0x30BB98u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BB90u, 0x30BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB98u;
label_30bb98:
    // 0x30bb98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb9c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bba0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bba4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bba8: 0x244603f0  addiu       $a2, $v0, 0x3F0
    ctx->pc = 0x30bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30bbac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BBACu;
    SET_GPR_U32(ctx, 31, 0x30BBB4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BBACu, 0x30BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBB4u;
label_30bbb4:
    // 0x30bbb4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbc0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x30bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x30bbc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbc8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x30bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x30bbcc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bbd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bbd8: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x30bbdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bbdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbe0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbe4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bbe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bbf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbf4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbf8: 0x24460470  addiu       $a2, $v0, 0x470
    ctx->pc = 0x30bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30bbfc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BBFCu;
    SET_GPR_U32(ctx, 31, 0x30BC04u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BBFCu, 0x30BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC04u;
label_30bc04:
    // 0x30bc04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc08: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30bc0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc14: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30bc18: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BC18u;
    SET_GPR_U32(ctx, 31, 0x30BC20u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BC18u, 0x30BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC20u;
label_30bc20:
    // 0x30bc20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bc28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc30: 0x24460470  addiu       $a2, $v0, 0x470
    ctx->pc = 0x30bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30bc34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BC34u;
    SET_GPR_U32(ctx, 31, 0x30BC3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BC34u, 0x30BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC3Cu;
label_30bc3c:
    // 0x30bc3c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc40: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x30bc40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc48: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bc4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc50: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x30bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x30bc54: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30bc58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc5c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x30bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x30bc60: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc64: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bc68: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bc6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bc70: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bc74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc78: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30bc7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc80: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bc84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bc88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bc8c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bc90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc94: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x30bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x30bc98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc9c: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bca0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bca4: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30bca8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bcac: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bcb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bcb4: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bcb8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bcbc: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
label_30bcc0:
    // 0x30bcc0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30bcc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bcc4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30bcc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30bcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x30BCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BCD0u;
}
