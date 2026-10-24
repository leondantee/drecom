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

// Function: Scr_parts_trans_set
// Address: 0x13dac0 - 0x13dc10
void Scr_parts_trans_set_0x13dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_trans_set_0x13dac0");
#endif

    switch (ctx->pc) {
        case 0x13dbc0u: goto label_13dbc0;
        default: break;
    }

    ctx->pc = 0x13dac0u;

    // 0x13dac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x13dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x13dac8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13dacc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13daccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13dad0: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x13dad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x13dad4: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x13dad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13dad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13dadc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13dae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dae8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x13dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13daec: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13daf0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13daf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13daf8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13dafc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13dafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13db00: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13db00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13db04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13db04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13db08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13db0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db10: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13db10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13db14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13db14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13db18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db1c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13db20: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13db24: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x13db24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13db28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db2c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13db30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13db34: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x13db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x13db38: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13db3c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13db40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13db44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13db48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13db48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13db4c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13db50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13db54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13db58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db5c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x13db60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db64: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x13db64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x13db68: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x13db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x13db6c: 0x344303fa  ori         $v1, $v0, 0x3FA
    ctx->pc = 0x13db6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1018);
    // 0x13db70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db74: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x13db74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x13db78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13db7c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x13db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x13db80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db84: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x13db84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x13db88: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13db8c: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x13db8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13db90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13db94: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x13db94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x13db98: 0x3c036c10  lui         $v1, 0x6C10
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27664 << 16));
    // 0x13db9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dba0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x13dba4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dba8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13dba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13dbac: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13dbb0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x13dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13dbb4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13dbb8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x13DBB8u;
    SET_GPR_U32(ctx, 31, 0x13DBC0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x13DBC0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13DBC0u) { return; }
    ctx->pc = 0x13DBC0u;
label_13dbc0:
    // 0x13dbc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13dbc4: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x13dbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13dbc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dbcc: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x13dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x13dbd0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13dbd4: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x13dbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x13dbd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dbdc: 0xac640138  sw          $a0, 0x138($v1)
    ctx->pc = 0x13dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 4));
    // 0x13dbe0: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x13dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x13dbe4: 0x346403ff  ori         $a0, $v1, 0x3FF
    ctx->pc = 0x13dbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x13dbe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dbec: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x13dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
    // 0x13dbf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13dbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13dbf4: 0xc420bd10  lwc1        $f0, -0x42F0($at)
    ctx->pc = 0x13dbf4u;
    { uint32_t bits = FAST_READ32(0x47BD10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dbf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dbfc: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x13dbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x13dc00: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x13dc00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13dc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC10u;
}
