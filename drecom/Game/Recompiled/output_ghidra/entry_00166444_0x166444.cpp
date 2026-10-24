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

// Function: entry_00166444
// Address: 0x166444 - 0x166524
void entry_00166444_0x166444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166444_0x166444");
#endif

    switch (ctx->pc) {
        case 0x16645cu: goto label_16645c;
        default: break;
    }

    ctx->pc = 0x166444u;

    // 0x166444: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x166448: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x166448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x16644c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x16644cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166450: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x166450u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166454: 0xc0409c6  jal         func_102718
    ctx->pc = 0x166454u;
    SET_GPR_U32(ctx, 31, 0x16645Cu);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x16645Cu;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16645Cu) { return; }
    ctx->pc = 0x16645Cu;
label_16645c:
    // 0x16645c: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x166460: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x166460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166464: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x166464u;
    {
        const bool branch_taken_0x166464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166464) {
            ctx->pc = 0x16654Cu;
            return;
        }
    }
    ctx->pc = 0x16646Cu;
    // 0x16646c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166470: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x166474: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166474u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166478: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16647c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16647cu;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 3));
    // 0x166480: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166484: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x166484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x166488: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16648c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x16648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166490: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x166490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x166494: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166494u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x166498: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16649c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1664a0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664a4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664a8: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x1664a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    // 0x1664ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664acu;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 3));
    // 0x1664b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664b4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1664b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1664b8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664bc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664c0: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x1664c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1664c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664c4u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1664c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664cc: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1664d0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664d4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664d8: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x1664d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x1664dc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664dcu;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 3));
    // 0x1664e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664e4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x1664e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1664e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1664ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1664ECu;
    {
        const bool branch_taken_0x1664ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1664ec) {
            ctx->pc = 0x166524u;
            return;
        }
    }
    ctx->pc = 0x1664F4u;
    // 0x1664f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664f8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1664f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1664fc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166500: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166504: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x166504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x166508: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166508u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 3));
    // 0x16650c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166510: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x166510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x166514: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166518: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16651c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x16651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x166520: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166520u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 3));
    ctx->pc = 0x166524u;
}
