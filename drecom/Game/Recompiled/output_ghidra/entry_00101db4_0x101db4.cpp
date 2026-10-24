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

// Function: entry_00101db4
// Address: 0x101db4 - 0x101e00
void entry_00101db4_0x101db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101db4_0x101db4");
#endif

    ctx->pc = 0x101db4u;

    // 0x101db4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x101db8: 0xde460038  ld          $a2, 0x38($s2)
    ctx->pc = 0x101db8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x101dbc: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x101dbcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x101dc0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x101dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x101dc4: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x101dc8: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x101dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x101dcc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x101dd0: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x101dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x101dd4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x101dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x101dd8: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x101dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x101ddc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x101ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x101de0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x101de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x101de4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x101de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x101de8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x101dec: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x101decu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x101df0: 0xfe4400e0  sd          $a0, 0xE0($s2)
    ctx->pc = 0x101df0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 4));
    // 0x101df4: 0xfe460038  sd          $a2, 0x38($s2)
    ctx->pc = 0x101df4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 6));
    // 0x101df8: 0xfe470060  sd          $a3, 0x60($s2)
    ctx->pc = 0x101df8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 7));
    // 0x101dfc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x101dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x101e00u;
}
