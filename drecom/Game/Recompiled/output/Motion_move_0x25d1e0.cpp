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

// Function: Motion_move
// Address: 0x25d1e0 - 0x25d318
void Motion_move_0x25d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_0x25d1e0");
#endif

    switch (ctx->pc) {
        case 0x25d1f8u: goto label_25d1f8;
        default: break;
    }

    ctx->pc = 0x25d1e0u;

    // 0x25d1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d1e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25d1e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x25d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25d1ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d1f0: 0xc09710c  jal         func_25C430
    ctx->pc = 0x25D1F0u;
    SET_GPR_U32(ctx, 31, 0x25D1F8u);
    ctx->pc = 0x25C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C430u, 0x25D1F0u, 0x25D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1F8u;
label_25d1f8:
    // 0x25d1f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d1fc: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x25d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d204: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25d208: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25D208u;
    {
        const bool branch_taken_0x25d208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d208) {
            ctx->pc = 0x25D2FCu;
            goto label_25d2fc;
        }
    }
    ctx->pc = 0x25D210u;
    // 0x25d210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d214: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25d214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25d218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d21c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25d220: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25D220u;
    {
        const bool branch_taken_0x25d220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d220) {
            ctx->pc = 0x25D2D4u;
            goto label_25d2d4;
        }
    }
    ctx->pc = 0x25D228u;
    // 0x25d228: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d22c: 0x94620a00  lhu         $v0, 0xA00($v1)
    ctx->pc = 0x25d22cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x25d230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d234: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x25d234u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d238: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d23c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25d23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25d240: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25d240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d248: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x25d248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x25d24c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d250: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25d250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25d254: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D254u;
    {
        const bool branch_taken_0x25d254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d254) {
            ctx->pc = 0x25D270u;
            goto label_25d270;
        }
    }
    ctx->pc = 0x25D25Cu;
    // 0x25d25c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d260: 0xa4400a00  sh          $zero, 0xA00($v0)
    ctx->pc = 0x25d260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2560), (uint16_t)GPR_U32(ctx, 0));
    // 0x25d264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d268: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d26c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25d26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_25d270:
    // 0x25d270: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d278: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25d27c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25d280: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d284: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d28c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x25d28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x25d290: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d294: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d29c: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x25d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25d2a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2a8: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x25d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x25d2ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d2b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2b8: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x25d2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x25d2bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d2c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d2c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2c8: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25d2cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25D2CCu;
    {
        const bool branch_taken_0x25d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2cc) {
            ctx->pc = 0x25D2FCu;
            goto label_25d2fc;
        }
    }
    ctx->pc = 0x25D2D4u;
label_25d2d4:
    // 0x25d2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2dc: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25d2e0: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25d2e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d2e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d2ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2f0: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x25d2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x25d2f4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25d2f8: 0xa06209da  sb          $v0, 0x9DA($v1)
    ctx->pc = 0x25d2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2522), (uint8_t)GPR_U32(ctx, 2));
label_25d2fc:
    // 0x25d2fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d300: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25d300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25d304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d308: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25d308u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d30c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d30cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d310: 0x3e00008  jr          $ra
    ctx->pc = 0x25D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D318u;
}
