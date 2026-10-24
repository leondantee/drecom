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

// Function: entry_0035db34
// Address: 0x35db34 - 0x35dc40
void entry_0035db34_0x35db34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035db34_0x35db34");
#endif

    switch (ctx->pc) {
        case 0x35db8cu: goto label_35db8c;
        case 0x35dbb4u: goto label_35dbb4;
        default: break;
    }

    ctx->pc = 0x35db34u;

    // 0x35db34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35db38: 0x24425e80  addiu       $v0, $v0, 0x5E80
    ctx->pc = 0x35db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
    // 0x35db3c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x35db3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35db40: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x35db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x35db44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db48: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x35db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x35db4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db4cu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 3));
    // 0x35db50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db54: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x35db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x35db58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35db58u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x35db5c: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x35db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x35db60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db64: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x35db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x35db68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db68u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x35db6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35db70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db74: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35db78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db78u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x35db7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35db7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35db80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35db80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35db84: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DB84u;
    SET_GPR_U32(ctx, 31, 0x35DB8Cu);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DB8Cu;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DB8Cu) { return; }
    ctx->pc = 0x35DB8Cu;
label_35db8c:
    // 0x35db8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35db90: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35db94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35db94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002000u));
    // 0x35db98: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x35db98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x35db9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35dba0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x35dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x35dba4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35dba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35dba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dbac: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x35DBACu;
    SET_GPR_U32(ctx, 31, 0x35DBB4u);
    ctx->pc = 0x10BA28u;
    {
        ctx->pc = 0x35DBB4u;
        ps2_stubs::sceIpuSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DBB4u) { return; }
    ctx->pc = 0x35DBB4u;
label_35dbb4:
    // 0x35dbb4: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x35dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x35dbb8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35dbbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35dbc0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x35dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35dbc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbc8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35dbcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dbccu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x35dbd0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x35dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x35dbd4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x35dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x35dbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35dbdc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x35dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35dbe0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dbe8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x35dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x35dbec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dbf0: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x35dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x35dbf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbf8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x35dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x35dbfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dbfcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x35dc00: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x35dc00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc04: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x35dc04u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35dc08: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35dc0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35dc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dc10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dc10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dc14: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x35dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x35dc18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35dc1c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35dc20: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x35dc20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35dc24: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x35dc28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35dc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dc2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc30: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x35dc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x35dc34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dc34u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 3));
    // 0x35dc38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x35DC38u;
    {
        const bool branch_taken_0x35dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc38) {
            ctx->pc = 0x35DD10u;
            return;
        }
    }
    ctx->pc = 0x35DC40u;
}
